/* nd-daemon.h
 *
 * Copyright 2023 Pedro Sader Azevedo <pedro.saderazevedo@proton.me>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <gio/gio.h>
#include <glib-object.h>

G_BEGIN_DECLS

#define ND_TYPE_DAEMON (nd_daemon_get_type ())
G_DECLARE_FINAL_TYPE (NdDaemon, nd_daemon, ND, DAEMON, GApplication)

G_END_DECLS
