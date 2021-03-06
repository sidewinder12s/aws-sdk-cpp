﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/macie2/model/BucketCountBySharedAccessType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

BucketCountBySharedAccessType::BucketCountBySharedAccessType() : 
    m_external(0),
    m_externalHasBeenSet(false),
    m_internal(0),
    m_internalHasBeenSet(false),
    m_notShared(0),
    m_notSharedHasBeenSet(false)
{
}

BucketCountBySharedAccessType::BucketCountBySharedAccessType(JsonView jsonValue) : 
    m_external(0),
    m_externalHasBeenSet(false),
    m_internal(0),
    m_internalHasBeenSet(false),
    m_notShared(0),
    m_notSharedHasBeenSet(false)
{
  *this = jsonValue;
}

BucketCountBySharedAccessType& BucketCountBySharedAccessType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("external"))
  {
    m_external = jsonValue.GetInt64("external");

    m_externalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("internal"))
  {
    m_internal = jsonValue.GetInt64("internal");

    m_internalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notShared"))
  {
    m_notShared = jsonValue.GetInt64("notShared");

    m_notSharedHasBeenSet = true;
  }

  return *this;
}

JsonValue BucketCountBySharedAccessType::Jsonize() const
{
  JsonValue payload;

  if(m_externalHasBeenSet)
  {
   payload.WithInt64("external", m_external);

  }

  if(m_internalHasBeenSet)
  {
   payload.WithInt64("internal", m_internal);

  }

  if(m_notSharedHasBeenSet)
  {
   payload.WithInt64("notShared", m_notShared);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
