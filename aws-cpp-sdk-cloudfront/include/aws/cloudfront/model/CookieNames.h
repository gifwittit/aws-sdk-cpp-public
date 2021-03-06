﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A complex type that specifies whether you want CloudFront to forward cookies
   * to the origin and, if so, which ones. For more information about forwarding
   * cookies to the origin, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/header-caching.html">
   * Caching Content Based on Request Headers</a> in the <i>Amazon CloudFront
   * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CookieNames">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API CookieNames
  {
  public:
    CookieNames();
    CookieNames(const Aws::Utils::Xml::XmlNode& xmlNode);
    CookieNames& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The number of different cookies that you want CloudFront to forward to the
     * origin for this cache behavior. The value must equal the number of items that
     * are in the <code>Items</code> field.</p> <p>When you set <code>Forward =
     * whitelist</code> (in the <code>CookiePreferences</code> object), this value must
     * be <code>1</code> or higher.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of different cookies that you want CloudFront to forward to the
     * origin for this cache behavior. The value must equal the number of items that
     * are in the <code>Items</code> field.</p> <p>When you set <code>Forward =
     * whitelist</code> (in the <code>CookiePreferences</code> object), this value must
     * be <code>1</code> or higher.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of different cookies that you want CloudFront to forward to the
     * origin for this cache behavior. The value must equal the number of items that
     * are in the <code>Items</code> field.</p> <p>When you set <code>Forward =
     * whitelist</code> (in the <code>CookiePreferences</code> object), this value must
     * be <code>1</code> or higher.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of different cookies that you want CloudFront to forward to the
     * origin for this cache behavior. The value must equal the number of items that
     * are in the <code>Items</code> field.</p> <p>When you set <code>Forward =
     * whitelist</code> (in the <code>CookiePreferences</code> object), this value must
     * be <code>1</code> or higher.</p>
     */
    inline CookieNames& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>A complex type that contains one <code>Name</code> element for each cookie
     * that you want CloudFront to forward to the origin for this cache behavior. It
     * must contain the same number of items that is specified in the
     * <code>Quantity</code> field.</p> <p>When you set <code>Forward =
     * whitelist</code> (in the <code>CookiePreferences</code> object), this field must
     * contain at least one item.</p>
     */
    inline const Aws::Vector<Aws::String>& GetItems() const{ return m_items; }

    /**
     * <p>A complex type that contains one <code>Name</code> element for each cookie
     * that you want CloudFront to forward to the origin for this cache behavior. It
     * must contain the same number of items that is specified in the
     * <code>Quantity</code> field.</p> <p>When you set <code>Forward =
     * whitelist</code> (in the <code>CookiePreferences</code> object), this field must
     * contain at least one item.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>A complex type that contains one <code>Name</code> element for each cookie
     * that you want CloudFront to forward to the origin for this cache behavior. It
     * must contain the same number of items that is specified in the
     * <code>Quantity</code> field.</p> <p>When you set <code>Forward =
     * whitelist</code> (in the <code>CookiePreferences</code> object), this field must
     * contain at least one item.</p>
     */
    inline void SetItems(const Aws::Vector<Aws::String>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>A complex type that contains one <code>Name</code> element for each cookie
     * that you want CloudFront to forward to the origin for this cache behavior. It
     * must contain the same number of items that is specified in the
     * <code>Quantity</code> field.</p> <p>When you set <code>Forward =
     * whitelist</code> (in the <code>CookiePreferences</code> object), this field must
     * contain at least one item.</p>
     */
    inline void SetItems(Aws::Vector<Aws::String>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>A complex type that contains one <code>Name</code> element for each cookie
     * that you want CloudFront to forward to the origin for this cache behavior. It
     * must contain the same number of items that is specified in the
     * <code>Quantity</code> field.</p> <p>When you set <code>Forward =
     * whitelist</code> (in the <code>CookiePreferences</code> object), this field must
     * contain at least one item.</p>
     */
    inline CookieNames& WithItems(const Aws::Vector<Aws::String>& value) { SetItems(value); return *this;}

    /**
     * <p>A complex type that contains one <code>Name</code> element for each cookie
     * that you want CloudFront to forward to the origin for this cache behavior. It
     * must contain the same number of items that is specified in the
     * <code>Quantity</code> field.</p> <p>When you set <code>Forward =
     * whitelist</code> (in the <code>CookiePreferences</code> object), this field must
     * contain at least one item.</p>
     */
    inline CookieNames& WithItems(Aws::Vector<Aws::String>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains one <code>Name</code> element for each cookie
     * that you want CloudFront to forward to the origin for this cache behavior. It
     * must contain the same number of items that is specified in the
     * <code>Quantity</code> field.</p> <p>When you set <code>Forward =
     * whitelist</code> (in the <code>CookiePreferences</code> object), this field must
     * contain at least one item.</p>
     */
    inline CookieNames& AddItems(const Aws::String& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>A complex type that contains one <code>Name</code> element for each cookie
     * that you want CloudFront to forward to the origin for this cache behavior. It
     * must contain the same number of items that is specified in the
     * <code>Quantity</code> field.</p> <p>When you set <code>Forward =
     * whitelist</code> (in the <code>CookiePreferences</code> object), this field must
     * contain at least one item.</p>
     */
    inline CookieNames& AddItems(Aws::String&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

    /**
     * <p>A complex type that contains one <code>Name</code> element for each cookie
     * that you want CloudFront to forward to the origin for this cache behavior. It
     * must contain the same number of items that is specified in the
     * <code>Quantity</code> field.</p> <p>When you set <code>Forward =
     * whitelist</code> (in the <code>CookiePreferences</code> object), this field must
     * contain at least one item.</p>
     */
    inline CookieNames& AddItems(const char* value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

  private:

    int m_quantity;
    bool m_quantityHasBeenSet;

    Aws::Vector<Aws::String> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
