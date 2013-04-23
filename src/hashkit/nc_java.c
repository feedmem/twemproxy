/*
 * twemproxy - A fast and lightweight proxy for memcached protocol.
 * Copyright (C) 2011 Twitter, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <nc_core.h>

static uint32_t JAVA_INIT = 0;
static uint32_t JAVA_PRIME = 31;

uint32_t
hash_crc16(const char *key, size_t key_length)
{
  uint32_t hash = JAVA_INIT;

  for (x = 0; x < key_length; x++) {
    hash *= JAVA_PRIME;
    hash += (uint32_t)key[x];
  }

  return hash
}
