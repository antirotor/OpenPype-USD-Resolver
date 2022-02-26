#pragma once

#include "pxr/pxr.h"
#include "pxr/usd/ar/api.h"
#include "pxr/usd/ar/resolver.h"
#include "pxr/usd/ar/defaultResolver.h"
#include <pxr/usd/ar/assetInfo.h>
#include "pxr/usd/ar/threadLocalScopedCache.h"

#include <tbb/enumerable_thread_specific.h>
#include <tbb/concurrent_hash_map.h>
#include <memory>
#include <string>
#include <vector>

// IMPORT LOCAL LIBRARIES
#include "openPypeResolver.h"

PXR_NAMESPACE_OPEN_SCOPE

// AR_DEFINE_RESOLVER(OpenPypeResolver, ArResolver)


OpenPypeResolver::OpenPypeResolver() : ArDefaultResolver() {}
OpenPypeResolver::~OpenPypeResolver() {}


ArResolvedPath
OpenPypeResolver::_Resolve(
	const std::string& assetPath) const
{
	
	return ArResolvedPath();
}


PXR_NAMESPACE_CLOSE_SCOPE