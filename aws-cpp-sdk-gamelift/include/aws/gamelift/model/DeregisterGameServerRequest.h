﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class AWS_GAMELIFT_API DeregisterGameServerRequest : public GameLiftRequest
  {
  public:
    DeregisterGameServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterGameServer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An identifier for the game server group where the game server to be
     * de-registered is running. Use either the <a>GameServerGroup</a> name or ARN
     * value.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const{ return m_gameServerGroupName; }

    /**
     * <p>An identifier for the game server group where the game server to be
     * de-registered is running. Use either the <a>GameServerGroup</a> name or ARN
     * value.</p>
     */
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }

    /**
     * <p>An identifier for the game server group where the game server to be
     * de-registered is running. Use either the <a>GameServerGroup</a> name or ARN
     * value.</p>
     */
    inline void SetGameServerGroupName(const Aws::String& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = value; }

    /**
     * <p>An identifier for the game server group where the game server to be
     * de-registered is running. Use either the <a>GameServerGroup</a> name or ARN
     * value.</p>
     */
    inline void SetGameServerGroupName(Aws::String&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::move(value); }

    /**
     * <p>An identifier for the game server group where the game server to be
     * de-registered is running. Use either the <a>GameServerGroup</a> name or ARN
     * value.</p>
     */
    inline void SetGameServerGroupName(const char* value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName.assign(value); }

    /**
     * <p>An identifier for the game server group where the game server to be
     * de-registered is running. Use either the <a>GameServerGroup</a> name or ARN
     * value.</p>
     */
    inline DeregisterGameServerRequest& WithGameServerGroupName(const Aws::String& value) { SetGameServerGroupName(value); return *this;}

    /**
     * <p>An identifier for the game server group where the game server to be
     * de-registered is running. Use either the <a>GameServerGroup</a> name or ARN
     * value.</p>
     */
    inline DeregisterGameServerRequest& WithGameServerGroupName(Aws::String&& value) { SetGameServerGroupName(std::move(value)); return *this;}

    /**
     * <p>An identifier for the game server group where the game server to be
     * de-registered is running. Use either the <a>GameServerGroup</a> name or ARN
     * value.</p>
     */
    inline DeregisterGameServerRequest& WithGameServerGroupName(const char* value) { SetGameServerGroupName(value); return *this;}


    /**
     * <p>The identifier for the game server to be de-registered.</p>
     */
    inline const Aws::String& GetGameServerId() const{ return m_gameServerId; }

    /**
     * <p>The identifier for the game server to be de-registered.</p>
     */
    inline bool GameServerIdHasBeenSet() const { return m_gameServerIdHasBeenSet; }

    /**
     * <p>The identifier for the game server to be de-registered.</p>
     */
    inline void SetGameServerId(const Aws::String& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = value; }

    /**
     * <p>The identifier for the game server to be de-registered.</p>
     */
    inline void SetGameServerId(Aws::String&& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = std::move(value); }

    /**
     * <p>The identifier for the game server to be de-registered.</p>
     */
    inline void SetGameServerId(const char* value) { m_gameServerIdHasBeenSet = true; m_gameServerId.assign(value); }

    /**
     * <p>The identifier for the game server to be de-registered.</p>
     */
    inline DeregisterGameServerRequest& WithGameServerId(const Aws::String& value) { SetGameServerId(value); return *this;}

    /**
     * <p>The identifier for the game server to be de-registered.</p>
     */
    inline DeregisterGameServerRequest& WithGameServerId(Aws::String&& value) { SetGameServerId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the game server to be de-registered.</p>
     */
    inline DeregisterGameServerRequest& WithGameServerId(const char* value) { SetGameServerId(value); return *this;}

  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet;

    Aws::String m_gameServerId;
    bool m_gameServerIdHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
