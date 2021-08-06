#pragma once

#include <cuda_runtime.h>
#include <device_launch_parameters.h>

#include <stdio.h>

namespace CR1 {
    __global__ void subKernel(int* c, const int* a, const int* b);

    int funcToCall(void);

    cudaError_t addWithCuda(int* c, const int* a, const int* b, unsigned int size);

}
