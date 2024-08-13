/*
 * This file is part of liblcf. Copyright (c) liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_SPAN_H
#define LCF_SPAN_H

#include <span>
#include <cassert>
#include <iterator>
#include <ostream>
#include <algorithm>

namespace lcf {

using ExtentT = std::size_t;
constexpr inline ExtentT dynamic_extent = std::dynamic_extent;

template <typename T, ExtentT Extent = dynamic_extent>
using Span = std::span<T, Extent>;

template <typename... Args>
constexpr inline auto MakeSpan(Args&&... args) noexcept -> decltype(std::span{std::forward<Args>(args)...}) {
    return std::span{std::forward<Args>(args)...};
}

}  // namespace lcf

#endif  // LCF_SPAN_H