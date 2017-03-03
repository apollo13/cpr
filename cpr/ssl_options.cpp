#include "cpr/ssl_options.h"

namespace cpr {

VerifySsl::VerifySsl(bool verify) : verify_{verify} {}

VerifySsl::VerifySsl(const char* ca_bundle) : verify_{true}, ca_bundle_{ca_bundle} {}

VerifySsl::operator bool() const {
    return verify_;
}

std::string VerifySsl::CABundle() const {
    return ca_bundle_;
}

} // namespace cpr
