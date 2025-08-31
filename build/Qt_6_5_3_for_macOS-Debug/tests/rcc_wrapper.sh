#!/bin/bash
DYLD_IMAGE_SUFFIX=_debug
export DYLD_IMAGE_SUFFIX
exec /Users/hyperion/Qt/6.5.3/macos/libexec/rcc "$@"
