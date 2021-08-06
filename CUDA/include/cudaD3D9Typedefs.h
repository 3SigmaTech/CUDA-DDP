#ifndef CUDAD3D9TYPEDEFS_H
#define CUDAD3D9TYPEDEFS_H

// Dependent includes for cudaD3D11.h
#include <d3d9.h>

#include <cudaD3D9.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/*
 * Macros for the latest version for each driver function in cudaD3D9.h
 */
#define PFN_cuD3D9GetDevice  PFN_cuD3D9GetDevice_v2000
#define PFN_cuD3D9GetDevices  PFN_cuD3D9GetDevices_v3020
#define PFN_cuD3D9CtxCreate  PFN_cuD3D9CtxCreate_v3020
#define PFN_cuD3D9CtxCreateOnDevice  PFN_cuD3D9CtxCreateOnDevice_v3020
#define PFN_cuD3D9GetDirect3DDevice  PFN_cuD3D9GetDirect3DDevice_v2000
#define PFN_cuGraphicsD3D9RegisterResource  PFN_cuGraphicsD3D9RegisterResource_v3000
#define PFN_cuD3D9RegisterResource  PFN_cuD3D9RegisterResource_v2000
#define PFN_cuD3D9UnregisterResource  PFN_cuD3D9UnregisterResource_v2000
#define PFN_cuD3D9MapResources  PFN_cuD3D9MapResources_v2000
#define PFN_cuD3D9UnmapResources  PFN_cuD3D9UnmapResources_v2000
#define PFN_cuD3D9ResourceSetMapFlags  PFN_cuD3D9ResourceSetMapFlags_v2000
#define PFN_cuD3D9ResourceGetSurfaceDimensions  PFN_cuD3D9ResourceGetSurfaceDimensions_v3020
#define PFN_cuD3D9ResourceGetMappedArray  PFN_cuD3D9ResourceGetMappedArray_v2010
#define PFN_cuD3D9ResourceGetMappedPointer  PFN_cuD3D9ResourceGetMappedPointer_v3020
#define PFN_cuD3D9ResourceGetMappedSize  PFN_cuD3D9ResourceGetMappedSize_v3020
#define PFN_cuD3D9ResourceGetMappedPitch  PFN_cuD3D9ResourceGetMappedPitch_v3020
#define PFN_cuD3D9Begin  PFN_cuD3D9Begin_v2000
#define PFN_cuD3D9End  PFN_cuD3D9End_v2000
#define PFN_cuD3D9RegisterVertexBuffer  PFN_cuD3D9RegisterVertexBuffer_v2000
#define PFN_cuD3D9MapVertexBuffer  PFN_cuD3D9MapVertexBuffer_v3020
#define PFN_cuD3D9UnmapVertexBuffer  PFN_cuD3D9UnmapVertexBuffer_v2000
#define PFN_cuD3D9UnregisterVertexBuffer  PFN_cuD3D9UnregisterVertexBuffer_v2000


/**
 * Type definitions for functions defined in cudaD3D9.h
 */
typedef CUresult (CUDAAPI *PFN_cuD3D9GetDevice_v2000)(CUdevice_v1 *pCudaDevice, const char *pszAdapterName);
typedef CUresult (CUDAAPI *PFN_cuD3D9GetDevices_v3020)(unsigned int *pCudaDeviceCount, CUdevice_v1 *pCudaDevices, unsigned int cudaDeviceCount, IDirect3DDevice9 *pD3D9Device, CUd3d9DeviceList deviceList);
typedef CUresult (CUDAAPI *PFN_cuD3D9CtxCreate_v3020)(CUcontext *pCtx, CUdevice_v1 *pCudaDevice, unsigned int Flags, IDirect3DDevice9 *pD3DDevice);
typedef CUresult (CUDAAPI *PFN_cuD3D9CtxCreateOnDevice_v3020)(CUcontext *pCtx, unsigned int flags, IDirect3DDevice9 *pD3DDevice, CUdevice_v1 cudaDevice);
typedef CUresult (CUDAAPI *PFN_cuD3D9GetDirect3DDevice_v2000)(IDirect3DDevice9 **ppD3DDevice);
typedef CUresult (CUDAAPI *PFN_cuGraphicsD3D9RegisterResource_v3000)(CUgraphicsResource *pCudaResource, IDirect3DResource9 *pD3DResource, unsigned int Flags);
typedef CUresult (CUDAAPI *PFN_cuD3D9RegisterResource_v2000)(IDirect3DResource9 *pResource, unsigned int Flags);
typedef CUresult (CUDAAPI *PFN_cuD3D9UnregisterResource_v2000)(IDirect3DResource9 *pResource);
typedef CUresult (CUDAAPI *PFN_cuD3D9MapResources_v2000)(unsigned int count, IDirect3DResource9 **ppResource);
typedef CUresult (CUDAAPI *PFN_cuD3D9UnmapResources_v2000)(unsigned int count, IDirect3DResource9 **ppResource);
typedef CUresult (CUDAAPI *PFN_cuD3D9ResourceSetMapFlags_v2000)(IDirect3DResource9 *pResource, unsigned int Flags);
typedef CUresult (CUDAAPI *PFN_cuD3D9ResourceGetSurfaceDimensions_v3020)(size_t *pWidth, size_t *pHeight, size_t *pDepth, IDirect3DResource9 *pResource, unsigned int Face, unsigned int Level);
typedef CUresult (CUDAAPI *PFN_cuD3D9ResourceGetMappedArray_v2010)(CUarray *pArray, IDirect3DResource9 *pResource, unsigned int Face, unsigned int Level);
typedef CUresult (CUDAAPI *PFN_cuD3D9ResourceGetMappedPointer_v3020)(CUdeviceptr_v2 *pDevPtr, IDirect3DResource9 *pResource, unsigned int Face, unsigned int Level);
typedef CUresult (CUDAAPI *PFN_cuD3D9ResourceGetMappedSize_v3020)(size_t *pSize, IDirect3DResource9 *pResource, unsigned int Face, unsigned int Level);
typedef CUresult (CUDAAPI *PFN_cuD3D9ResourceGetMappedPitch_v3020)(size_t *pPitch, size_t *pPitchSlice, IDirect3DResource9 *pResource, unsigned int Face, unsigned int Level);
typedef CUresult (CUDAAPI *PFN_cuD3D9Begin_v2000)(IDirect3DDevice9 *pDevice);
typedef CUresult (CUDAAPI *PFN_cuD3D9End_v2000)(void);
typedef CUresult (CUDAAPI *PFN_cuD3D9RegisterVertexBuffer_v2000)(IDirect3DVertexBuffer9 *pVB);
typedef CUresult (CUDAAPI *PFN_cuD3D9MapVertexBuffer_v3020)(CUdeviceptr_v2 *pDevPtr, size_t *pSize, IDirect3DVertexBuffer9 *pVB);
typedef CUresult (CUDAAPI *PFN_cuD3D9UnmapVertexBuffer_v2000)(IDirect3DVertexBuffer9 *pVB);
typedef CUresult (CUDAAPI *PFN_cuD3D9UnregisterVertexBuffer_v2000)(IDirect3DVertexBuffer9 *pVB);

/*
 * Type definitions for older versioned functions in cudaD3D9.h
 */
#if defined(__CUDA_API_VERSION_INTERNAL)
    typedef CUresult (CUDAAPI *PFN_cuD3D9CtxCreate_v2000)(CUcontext *pCtx, CUdevice_v1 *pCudaDevice, unsigned int Flags, IDirect3DDevice9 *pD3DDevice);
    typedef CUresult (CUDAAPI *PFN_cuD3D9ResourceGetSurfaceDimensions_v2000)(unsigned int *pWidth, unsigned int *pHeight, unsigned int *pDepth, IDirect3DResource9 *pResource, unsigned int Face, unsigned int Level);
    typedef CUresult (CUDAAPI *PFN_cuD3D9ResourceGetMappedPointer_v2000)(CUdeviceptr_v1 *pDevPtr, IDirect3DResource9 *pResource, unsigned int Face, unsigned int Level);
    typedef CUresult (CUDAAPI *PFN_cuD3D9ResourceGetMappedSize_v2000)(unsigned int *pSize, IDirect3DResource9 *pResource, unsigned int Face, unsigned int Level);
    typedef CUresult (CUDAAPI *PFN_cuD3D9ResourceGetMappedPitch_v2000)(unsigned int *pPitch, unsigned int *pPitchSlice, IDirect3DResource9 *pResource, unsigned int Face, unsigned int Level);
    typedef CUresult (CUDAAPI *PFN_cuD3D9MapVertexBuffer_v2000)(CUdeviceptr_v1 *pDevPtr, unsigned int *pSize, IDirect3DVertexBuffer9 *pVB);
#endif

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // file guard
