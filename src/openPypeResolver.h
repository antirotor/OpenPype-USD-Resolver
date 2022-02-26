#pragma once

#include "pxr/pxr.h"
#include "pxr/usd/ar/api.h"
#include "pxr/usd/ar/resolver.h"
#include "pxr/usd/ar/defaultResolver.h"
#include <pxr/usd/ar/assetInfo.h>
#include "pxr/usd/ar/threadLocalScopedCache.h"

#include <tbb/enumerable_thread_specific.h>

#include <memory>
#include <string>
#include <vector>

PXR_NAMESPACE_OPEN_SCOPE;

class OpenPypeResolver : public ArDefaultResolver 
{
public:
	OpenPypeResolver();
	virtual ~OpenPypeResolver();
	
	ArResolvedPath _Resolve(const std::string& assetPath) const final;

};

PXR_NAMESPACE_CLOSE_SCOPE
