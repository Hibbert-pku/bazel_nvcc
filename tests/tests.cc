
#include <algorithm>
#include <string>
#include <vector>

#include <cuda_runtime.h>

#include "gtest/gtest.h"

__global__ void kernel(int* x) {
  x[0]=1;
}

class CUDATest: public testing::Test {
};

TEST_F(CUDATest, cuda) {
  int *x;
  cudaStream_t stream_;
  cudaStreamCreate(&stream_);
  cudaError_t err = cudaMalloc(&x, sizeof(int)*10);
  if (err != cudaSuccess) {
    exit(-1);
  }
  kernel<<<1,1,0,stream_>>>(x);
  cudaStreamSynchronize(stream_);
  cudaStreamDestroy(stream_);
  cudaFree(x);
  return;
}
