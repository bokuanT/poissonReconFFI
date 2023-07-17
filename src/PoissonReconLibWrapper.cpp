#include "PoissonReconLib.h"

extern "C" {
    void update_mem_data(const double* data, size_t length) {
        mem_data.assign(data, data + length);
    }
}
