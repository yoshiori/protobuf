// Protocol Buffers - Google's data interchange format
// Copyright 2023 Google LLC.  All rights reserved.
//
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file or at
// https://developers.google.com/open-source/licenses/bsd

#ifndef UPB_MINI_TABLE_EXTENSION_H_
#define UPB_MINI_TABLE_EXTENSION_H_

#include <stdint.h>

#include "upb/mini_table/internal/extension.h"
#include "upb/mini_table/types.h"  // IWYU pragma: export

// Must be last.
#include "upb/port/def.inc"

#ifdef __cplusplus
extern "C" {
#endif

UPB_API_INLINE const upb_MiniTableField* upb_MiniTableExtension_AsField(
    const upb_MiniTableExtension* e) {
  return UPB_PRIVATE(_upb_MiniTableExtension_AsField)(e);
}

UPB_API_INLINE uint32_t
upb_MiniTableExtension_Number(const upb_MiniTableExtension* e) {
  return UPB_PRIVATE(_upb_MiniTableExtension_Number)(e);
}

UPB_API_INLINE const upb_MiniTable* upb_MiniTableExtension_GetSubMessage(
    const upb_MiniTableExtension* e) {
  return UPB_PRIVATE(_upb_MiniTableExtension_GetSubMessage)(e);
}

UPB_API_INLINE void upb_MiniTableExtension_SetSubMessage(
    upb_MiniTableExtension* e, const upb_MiniTable* m) {
  UPB_PRIVATE(_upb_MiniTableExtension_SetSubMessage)(e, m);
}

#ifdef __cplusplus
} /* extern "C" */
#endif

#include "upb/port/undef.inc"

#endif /* UPB_MINI_TABLE_EXTENSION_H_ */
