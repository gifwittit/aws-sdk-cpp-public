﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{

  /**
   * <p>Reserved for future use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UserIdentityRoot">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API UserIdentityRoot
  {
  public:
    UserIdentityRoot();
    UserIdentityRoot(Aws::Utils::Json::JsonView jsonValue);
    UserIdentityRoot& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline UserIdentityRoot& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline UserIdentityRoot& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline UserIdentityRoot& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline UserIdentityRoot& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline UserIdentityRoot& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline UserIdentityRoot& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline UserIdentityRoot& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline UserIdentityRoot& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline UserIdentityRoot& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
