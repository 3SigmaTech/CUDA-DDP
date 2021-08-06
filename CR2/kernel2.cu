
#include "Header2.hpp"

using namespace CR2;


__global__ void CR2::addKernel(int *c, const int *a, const int *b)
{
    cudaStream_t stream;
    cudaStreamCreateWithFlags(&stream, cudaStreamNonBlocking);

    int i = threadIdx.x;
    c[i] = a[i] + b[i];

    cudaDeviceSynchronize();
}
