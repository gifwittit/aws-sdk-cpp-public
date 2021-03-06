﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/S3StorageClass.h>
#include <aws/datasync/model/S3Config.h>
#include <aws/core/utils/DateTime.h>
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
namespace DataSync
{
namespace Model
{
  /**
   * <p>DescribeLocationS3Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationS3Response">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API DescribeLocationS3Result
  {
  public:
    DescribeLocationS3Result();
    DescribeLocationS3Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLocationS3Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket location.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket location.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket location.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket location.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket location.</p>
     */
    inline DescribeLocationS3Result& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket location.</p>
     */
    inline DescribeLocationS3Result& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket location.</p>
     */
    inline DescribeLocationS3Result& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}


    /**
     * <p>The URL of the Amazon S3 location that was described.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>The URL of the Amazon S3 location that was described.</p>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUri = value; }

    /**
     * <p>The URL of the Amazon S3 location that was described.</p>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUri = std::move(value); }

    /**
     * <p>The URL of the Amazon S3 location that was described.</p>
     */
    inline void SetLocationUri(const char* value) { m_locationUri.assign(value); }

    /**
     * <p>The URL of the Amazon S3 location that was described.</p>
     */
    inline DescribeLocationS3Result& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>The URL of the Amazon S3 location that was described.</p>
     */
    inline DescribeLocationS3Result& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>The URL of the Amazon S3 location that was described.</p>
     */
    inline DescribeLocationS3Result& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}


    /**
     * <p>The Amazon S3 storage class that you chose to store your files in when this
     * location is used as a task destination. For more information about S3 storage
     * classes, see <a href="https://aws.amazon.com/s3/storage-classes/">Amazon S3
     * Storage Classes</a> in the <i>Amazon Simple Storage Service Developer Guide</i>.
     * Some storage classes have behaviors that can affect your S3 storage cost. For
     * detailed information, see <a>using-storage-classes</a>.</p>
     */
    inline const S3StorageClass& GetS3StorageClass() const{ return m_s3StorageClass; }

    /**
     * <p>The Amazon S3 storage class that you chose to store your files in when this
     * location is used as a task destination. For more information about S3 storage
     * classes, see <a href="https://aws.amazon.com/s3/storage-classes/">Amazon S3
     * Storage Classes</a> in the <i>Amazon Simple Storage Service Developer Guide</i>.
     * Some storage classes have behaviors that can affect your S3 storage cost. For
     * detailed information, see <a>using-storage-classes</a>.</p>
     */
    inline void SetS3StorageClass(const S3StorageClass& value) { m_s3StorageClass = value; }

    /**
     * <p>The Amazon S3 storage class that you chose to store your files in when this
     * location is used as a task destination. For more information about S3 storage
     * classes, see <a href="https://aws.amazon.com/s3/storage-classes/">Amazon S3
     * Storage Classes</a> in the <i>Amazon Simple Storage Service Developer Guide</i>.
     * Some storage classes have behaviors that can affect your S3 storage cost. For
     * detailed information, see <a>using-storage-classes</a>.</p>
     */
    inline void SetS3StorageClass(S3StorageClass&& value) { m_s3StorageClass = std::move(value); }

    /**
     * <p>The Amazon S3 storage class that you chose to store your files in when this
     * location is used as a task destination. For more information about S3 storage
     * classes, see <a href="https://aws.amazon.com/s3/storage-classes/">Amazon S3
     * Storage Classes</a> in the <i>Amazon Simple Storage Service Developer Guide</i>.
     * Some storage classes have behaviors that can affect your S3 storage cost. For
     * detailed information, see <a>using-storage-classes</a>.</p>
     */
    inline DescribeLocationS3Result& WithS3StorageClass(const S3StorageClass& value) { SetS3StorageClass(value); return *this;}

    /**
     * <p>The Amazon S3 storage class that you chose to store your files in when this
     * location is used as a task destination. For more information about S3 storage
     * classes, see <a href="https://aws.amazon.com/s3/storage-classes/">Amazon S3
     * Storage Classes</a> in the <i>Amazon Simple Storage Service Developer Guide</i>.
     * Some storage classes have behaviors that can affect your S3 storage cost. For
     * detailed information, see <a>using-storage-classes</a>.</p>
     */
    inline DescribeLocationS3Result& WithS3StorageClass(S3StorageClass&& value) { SetS3StorageClass(std::move(value)); return *this;}


    
    inline const S3Config& GetS3Config() const{ return m_s3Config; }

    
    inline void SetS3Config(const S3Config& value) { m_s3Config = value; }

    
    inline void SetS3Config(S3Config&& value) { m_s3Config = std::move(value); }

    
    inline DescribeLocationS3Result& WithS3Config(const S3Config& value) { SetS3Config(value); return *this;}

    
    inline DescribeLocationS3Result& WithS3Config(S3Config&& value) { SetS3Config(std::move(value)); return *this;}


    /**
     * <p>The time that the Amazon S3 bucket location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the Amazon S3 bucket location was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the Amazon S3 bucket location was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the Amazon S3 bucket location was created.</p>
     */
    inline DescribeLocationS3Result& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the Amazon S3 bucket location was created.</p>
     */
    inline DescribeLocationS3Result& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_locationArn;

    Aws::String m_locationUri;

    S3StorageClass m_s3StorageClass;

    S3Config m_s3Config;

    Aws::Utils::DateTime m_creationTime;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
