
#ifndef DUNE_ARRAY_HPP_INCLUDED_
#define DUNE_ARRAY_HPP_INCLUDED_

#include <cstddef>

template <typename T, std::size_t N> struct Array
{
  T data[N];

  constexpr T&
  operator[](std::size_t i) noexcept
  {
    return data[i];
  }

  constexpr const T&
  operator[](std::size_t i) const noexcept
  {
    return data[i];
  }

  template <typename U>
  constexpr U
  operator+(U i) const noexcept
  {
    return data + i;
  }

  template <size_t U>
  constexpr Array<T, N + U - 1>
  operator+(const char (&str)[U]) const noexcept
  {
    Array<char, N + U - 1> rv = {};

    for (size_t i = 0; i < N - 1; ++i)
      rv[i] = data[i];

    for (size_t i = 0; i < U; ++i)
      rv[N - 1 + i] = str[i];

    return rv;
  }

  constexpr
  operator const char*() const noexcept
  {
    return data;
  }
};

constexpr size_t
const_strlen(const char* str)
{
  size_t len = 0;
  while (str[len] != '\0')
    len++;
  return len;
}

template <size_t N>
constexpr size_t
const_strlen(const char (&str)[N])
{
  return N;
}

// Concatenate two strings.
template <size_t N1, size_t N2>
constexpr Array<char, N1 + N2 - 1>
str_app(const char (&str1)[N1], const char (&str2)[N2])
{
  Array<char, N1 + N2 - 1> rv = {};

  for (size_t i = 0; i < N1 - 1; ++i)
    rv[i] = str1[i];

  for (size_t i = 0; i < N2; ++i)
    rv[N1 - 1 + i] = str2[i];

  return rv;
}

template <size_t N1, size_t N2>
constexpr Array<char, N1 + N2 - 1>
str_ext(const Array<char, N1>& str1, const char (&str2)[N2])
{
  Array<char, N1 + N2 - 1> rv = {};

  for (size_t i = 0; i < N1 - 1; ++i)
    rv[i] = str1[i];

  for (size_t i = 0; i < N2; ++i)
    rv[N1 - 1 + i] = str2[i];

  return rv;
}

#endif  // DUNE_ARRAY_HPP_INCLUDED_