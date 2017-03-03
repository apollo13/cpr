#ifndef CPR_SSLOPTIONS_H
#define CPR_SSLOPTIONS_H
#include <string>

namespace cpr {

class VerifySsl {
  public:
    VerifySsl() {}
    VerifySsl(bool verify);
    VerifySsl(const char* ca_bundle);

    operator bool() const;
    std::string CABundle() const;

  private:
    bool verify_ = true;
    std::string ca_bundle_;
};

} // namespace cpr

#endif
