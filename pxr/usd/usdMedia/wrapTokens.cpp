//
// Copyright 2016 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
// GENERATED FILE.  DO NOT EDIT.
#include <boost/python/class.hpp>
#include "pxr/usd/usdMedia/tokens.h"

PXR_NAMESPACE_USING_DIRECTIVE

namespace {

// Helper to return a static token as a string.  We wrap tokens as Python
// strings and for some reason simply wrapping the token using def_readonly
// bypasses to-Python conversion, leading to the error that there's no
// Python type for the C++ TfToken type.  So we wrap this functor instead.
class _WrapStaticToken {
public:
    _WrapStaticToken(const TfToken* token) : _token(token) { }

    std::string operator()() const
    {
        return _token->GetString();
    }

private:
    const TfToken* _token;
};

template <typename T>
void
_AddToken(T& cls, const char* name, const TfToken& token)
{
    cls.add_static_property(name,
                            boost::python::make_function(
                                _WrapStaticToken(&token),
                                boost::python::return_value_policy<
                                    boost::python::return_by_value>(),
                                boost::mpl::vector1<std::string>()));
}

} // anonymous

void wrapUsdMediaTokens()
{
    boost::python::class_<UsdMediaTokensType, boost::noncopyable>
        cls("Tokens", boost::python::no_init);
    _AddToken(cls, "auralMode", UsdMediaTokens->auralMode);
    _AddToken(cls, "defaultImage", UsdMediaTokens->defaultImage);
    _AddToken(cls, "endTime", UsdMediaTokens->endTime);
    _AddToken(cls, "filePath", UsdMediaTokens->filePath);
    _AddToken(cls, "gain", UsdMediaTokens->gain);
    _AddToken(cls, "loopFromStage", UsdMediaTokens->loopFromStage);
    _AddToken(cls, "loopFromStart", UsdMediaTokens->loopFromStart);
    _AddToken(cls, "loopFromStartToEnd", UsdMediaTokens->loopFromStartToEnd);
    _AddToken(cls, "mediaOffset", UsdMediaTokens->mediaOffset);
    _AddToken(cls, "nonSpatial", UsdMediaTokens->nonSpatial);
    _AddToken(cls, "onceFromStart", UsdMediaTokens->onceFromStart);
    _AddToken(cls, "onceFromStartToEnd", UsdMediaTokens->onceFromStartToEnd);
    _AddToken(cls, "playbackMode", UsdMediaTokens->playbackMode);
    _AddToken(cls, "previews", UsdMediaTokens->previews);
    _AddToken(cls, "previewThumbnails", UsdMediaTokens->previewThumbnails);
    _AddToken(cls, "previewThumbnailsDefault", UsdMediaTokens->previewThumbnailsDefault);
    _AddToken(cls, "spatial", UsdMediaTokens->spatial);
    _AddToken(cls, "startTime", UsdMediaTokens->startTime);
    _AddToken(cls, "thumbnails", UsdMediaTokens->thumbnails);
}
