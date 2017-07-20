#include "types.h"
#include <math.h>

template <typename T>
array_t<T> sigmoid(array_t<T> x)
{
  array_t<T> y = x;
  for (std::size_t i=0; i<x.size(); ++i) {
    y(i) = 1 / (1 + exp(-x(i)));
  }
  return y;
}
