#include<stdio.h>
#ifdef useCUDA
#include <cuda_runtime.h>
__global__ void kernel() {
  printf("in kernel\n");
}
#endif
void test() {
#ifdef useCUDA
  kernel<<<1,1>>>();
  cudaDeviceSynchronize();
#endif
}
