#include <iostream>
#include <signal.h>
#include <typeinfo>

#include "cli/shell_font.h"

#include "atframe/atapp.h"


namespace atapp {
    module_impl::module_impl() : owner_(NULL) {}
    module_impl::~module_impl() {}

    int module_impl::reload() { return 0; }

    int module_impl::stop() { return 0; }

    int module_impl::tick() { return 0; }

    const char *module_impl::name() {
        const char *ret = typeid(*this).name();
        if (NULL == ret) {
            return "RTTI Unavailable";
        }

        // some compiler will generate number to mark the type
        while (ret && *ret >= '0' && *ret <= '9') {
            ++ret;
        }
        return ret;
    }
}
