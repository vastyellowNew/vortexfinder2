#ifndef _UTILS_H
#define _UTILS_H

#include <cmath>

template <typename T>
inline static T mod2pi(T x)
{
  T y = fmod(x, 2*M_PI); 
  if (y<0) y+= 2*M_PI;
  return y; 
}

template <typename T>
static inline void cross_product(const T A[3], const T B[3], T C[3])
{
  C[0] = A[1]*B[2] - A[2]*B[1]; 
  C[1] = A[2]*B[0] - A[0]*B[2]; 
  C[2] = A[0]*B[1] - A[1]*B[0];
}

template <typename T>
static inline T inner_product(const T A[3], const T B[3])
{
  return A[0]*B[0] + A[1]*B[1] + A[2]*B[2];
}

#endif