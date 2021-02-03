// PluginKStrong.hpp
// Aleksandar Koruga (aleksandar.koruga@gmail.com)

#pragma once

#include "SC_PlugIn.hpp"

namespace KStrong {

class KStrong : public SCUnit {
public:
    KStrong();

    // Destructor
    // ~KStrong();

private:
    // Calc function
    void next(int nSamples);

    // Member variables
};

} // namespace KStrong
