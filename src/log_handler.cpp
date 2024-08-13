/*
 * This file is part of liblcf. Copyright (c) liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "lcf/log_handler.h"
#include <cassert>
#include <cstdarg>
#include <cstdio>
#include <iostream>

namespace lcf {
namespace LogHandler {
namespace {
	void DefaultHandler(LogHandler::Level level, StringView message, UserData) {
	}

	Level level = Level::Debug;
	LogHandlerFn output_fn = DefaultHandler;
	UserData output_userdata = nullptr;
}

void SetHandler(LogHandlerFn fn, UserData userdata) {
}

void SetLevel(Level new_level) {
	level = new_level;
}

} // namespace Output

namespace Log {
namespace {
	std::string format_string(char const* fmt, va_list args) {
		return "";
	}
}

void Debug(const char* fmt, ...) {
}

void Warning(const char* fmt, ...) {
}

void Error(const char* fmt, ...) {
}

} // namespace Log
} // namespace lcf
