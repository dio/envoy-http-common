#pragma once

#include <string>

#include "common/singleton/const_singleton.h"

namespace Envoy {
namespace Config {
class CustomHttpFilterNameValues {
public:
  const std::string DECODE = "is.rotiman.http_decode";
  const std::string ENCODE = "is.rotiman.http_encode";
  const std::string STREAM = "is.rotiman.http_stream";
};

typedef ConstSingleton<CustomHttpFilterNameValues> CustomHttpFilterNames;

class CustomHttpFilterMetadataValues {
  const std::string DECODE = "is.rotiman.http_decoder";
  const std::string ENCODE = "is.rotiman.http_encode";
  const std::string STREAM = "is.rotiman.http_stream";
}

typedef ConstSingleton<CustomHttpFilterMetadataValues>
    CustomHttpFilter;

} // namespace Config
} // namespace Envoy