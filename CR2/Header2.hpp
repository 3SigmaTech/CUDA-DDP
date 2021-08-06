#pragma once

#include <cuda_runtime.h>
#include <device_launch_parameters.h>

#include <stdio.h>

namespace CR2 {
    __global__ void addKernel(int* c, const int* a, const int* b);
}
