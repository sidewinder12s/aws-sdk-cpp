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

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/StreamingConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API GetVoiceConnectorStreamingConfigurationResult
  {
  public:
    GetVoiceConnectorStreamingConfigurationResult();
    GetVoiceConnectorStreamingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetVoiceConnectorStreamingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The streaming configuration details.</p>
     */
    inline const StreamingConfiguration& GetStreamingConfiguration() const{ return m_streamingConfiguration; }

    /**
     * <p>The streaming configuration details.</p>
     */
    inline void SetStreamingConfiguration(const StreamingConfiguration& value) { m_streamingConfiguration = value; }

    /**
     * <p>The streaming configuration details.</p>
     */
    inline void SetStreamingConfiguration(StreamingConfiguration&& value) { m_streamingConfiguration = std::move(value); }

    /**
     * <p>The streaming configuration details.</p>
     */
    inline GetVoiceConnectorStreamingConfigurationResult& WithStreamingConfiguration(const StreamingConfiguration& value) { SetStreamingConfiguration(value); return *this;}

    /**
     * <p>The streaming configuration details.</p>
     */
    inline GetVoiceConnectorStreamingConfigurationResult& WithStreamingConfiguration(StreamingConfiguration&& value) { SetStreamingConfiguration(std::move(value)); return *this;}

  private:

    StreamingConfiguration m_streamingConfiguration;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
