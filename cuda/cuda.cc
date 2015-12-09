#include<stdio.h>
#ifdef __CUDA__
#include <cuda_runtime.h>
__global__ void kernel() {
  printf("gpu!!!!");
}
#endif
void test() {
#ifdef __CUDA__
  dim3 block(1);
  kernel<<<1,1>>>();
  cudaDeviceSynchronize();
#endif
#ifdef use_CUDA
  printf("right\n");
#endif
  printf("cuda here\n");
}
