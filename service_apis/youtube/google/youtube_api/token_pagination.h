// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.0
//   Build date: 2015-01-14 17:53:03 UTC
//   on: 2015-03-12, 20:35:33 UTC
//   C++ generator version:

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
//   Revision: 130
// Generated by:
//    Tool: google-apis-code-generator 1.5.0
//     C++: 0.1.2
#ifndef  GOOGLE_YOUTUBE_API_TOKEN_PAGINATION_H_
#define  GOOGLE_YOUTUBE_API_TOKEN_PAGINATION_H_

#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Stub token pagination template to suppress results.
 *
 * @ingroup DataObject
 */
class TokenPagination : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static TokenPagination* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit TokenPagination(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit TokenPagination(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~TokenPagination();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::TokenPagination</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::TokenPagination");
  }

 private:
  void operator=(const TokenPagination&);
};  // TokenPagination
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_TOKEN_PAGINATION_H_
