/*
 * Copyright (c) 2022-2025, Tim Flynn <trflynn89@ladybird.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibJS/Runtime/Intl/RelativeTimeFormat.h>
#include <LibJS/Runtime/PrototypeObject.h>

namespace JS::Intl {

class RelativeTimeFormatPrototype final : public PrototypeObject<RelativeTimeFormatPrototype, RelativeTimeFormat> {
    JS_PROTOTYPE_OBJECT(RelativeTimeFormatPrototype, RelativeTimeFormat, Intl.RelativeTimeFormat);
    GC_DECLARE_ALLOCATOR(RelativeTimeFormatPrototype);

public:
    virtual void initialize(Realm&) override;
    virtual ~RelativeTimeFormatPrototype() override = default;

private:
    explicit RelativeTimeFormatPrototype(Realm&);

    JS_DECLARE_NATIVE_FUNCTION(resolved_options);
    JS_DECLARE_NATIVE_FUNCTION(format);
    JS_DECLARE_NATIVE_FUNCTION(format_to_parts);
};

}
