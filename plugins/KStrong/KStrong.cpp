// PluginKStrong.cpp
// Aleksandar Koruga (aleksandar.koruga@gmail.com)

#include "SC_PlugIn.hpp"
#include "KStrong.hpp"

static InterfaceTable* ft;

namespace KStrong {

KStrong::KStrong() {
    mCalcFunc = make_calc_function<KStrong, &KStrong::next>();
    next(1);
}

void KStrong::next(int nSamples) {
    const float* input = in(0);
    const float* gain = in(1);
    float* outbuf = out(0);

    // simple gain function
    for (int i = 0; i < nSamples; ++i) {
        outbuf[i] = input[i] * gain[i];
    }
}

} // namespace KStrong

PluginLoad(KStrongUGens) {
    // Plugin magic
    ft = inTable;
    registerUnit<KStrong::KStrong>(ft, "KStrong", false);
}
