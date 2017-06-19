/*
 * Copyright (c) 2017 Cossack Labs Limited
 *
 * This file is part of Hermes.
 *
 * Hermes is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Hermes is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with Hermes.  If not, see <http://www.gnu.org/licenses/>.
 *
 */


#ifndef MID_HERMES_LL_USER_H
#define MID_HERMES_LL_USER_H

#include <hermes/common/errors.h>
#include <hermes/mid_hermes/mid_hermes_ll_buffer.h>


typedef struct mid_hermes_ll_user_type{
  mid_hermes_ll_buffer_t* id;
  mid_hermes_ll_buffer_t* sk;
  mid_hermes_ll_buffer_t* pk;
} mid_hermes_ll_user_t;

mid_hermes_ll_user_t* mid_hermes_ll_local_user_create(mid_hermes_ll_buffer_t* id,
                                                      mid_hermes_ll_buffer_t* sk,
                                                      mid_hermes_ll_buffer_t* pk);

mid_hermes_ll_user_t* mid_hermes_ll_user_create(mid_hermes_ll_buffer_t* id,
                                                mid_hermes_ll_buffer_t* pk);

hermes_status_t mid_hermes_ll_user_destroy(mid_hermes_ll_user_t** u);


#endif //MID_HERMES_LL_USER_H
