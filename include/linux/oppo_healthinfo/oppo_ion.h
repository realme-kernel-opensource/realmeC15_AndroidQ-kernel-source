/*
 *Copyright (c)  2018  Guangdong OPPO Mobile Comm Corp., Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef __LINUX_ION_H__
#define __LINUX_ION_H__

extern atomic_long_t ion_total_size;
extern bool ion_cnt_enable;
extern unsigned long ion_total(void);

#endif /* __LINUX_ION_H__ */

