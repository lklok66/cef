// Copyright (c) 2014 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/cookie_manager_cpptoc.h"
#include "libcef_dll/ctocpp/request_context_handler_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

CefRefPtr<CefCookieManager> CefRequestContextHandlerCToCpp::GetCookieManager() {
  if (CEF_MEMBER_MISSING(struct_, get_cookie_manager))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_cookie_manager_t* _retval = struct_->get_cookie_manager(struct_);

  // Return type: refptr_diff
  return CefCookieManagerCppToC::Unwrap(_retval);
}


#ifndef NDEBUG
template<> long CefCToCpp<CefRequestContextHandlerCToCpp,
    CefRequestContextHandler, cef_request_context_handler_t>::DebugObjCt = 0;
#endif

