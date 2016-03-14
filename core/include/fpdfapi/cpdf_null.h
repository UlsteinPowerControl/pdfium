// Copyright 2016 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef CORE_INCLUDE_FPDFAPI_CPDF_NULL_H_
#define CORE_INCLUDE_FPDFAPI_CPDF_NULL_H_

#include "core/include/fpdfapi/cpdf_object.h"

class CPDF_Null : public CPDF_Object {
 public:
  CPDF_Null();

  // CPDF_Object.
  Type GetType() const override;
  CPDF_Object* Clone(FX_BOOL bDirect = FALSE) const override;
};

#endif  // CORE_INCLUDE_FPDFAPI_CPDF_NULL_H_