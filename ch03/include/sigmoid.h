#include "types.h"

template <typename T>
array_t<T> sigmoid(array_t<T> x)
{
  return 1 / (1 + xt::exp(-x));
}
