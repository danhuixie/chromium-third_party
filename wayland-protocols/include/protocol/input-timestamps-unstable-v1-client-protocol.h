/* Generated by wayland-scanner 1.13.0 */

#ifndef INPUT_TIMESTAMPS_UNSTABLE_V1_CLIENT_PROTOCOL_H
#define INPUT_TIMESTAMPS_UNSTABLE_V1_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * @page page_input_timestamps_unstable_v1 The input_timestamps_unstable_v1 protocol
 * High-resolution timestamps for input events
 *
 * @section page_desc_input_timestamps_unstable_v1 Description
 *
 * This protocol specifies a way for a client to request and receive
 * high-resolution timestamps for input events.
 *
 * Warning! The protocol described in this file is experimental and
 * backward incompatible changes may be made. Backward compatible changes
 * may be added together with the corresponding interface version bump.
 * Backward incompatible changes are done by bumping the version number in
 * the protocol and interface names and resetting the interface version.
 * Once the protocol is to be declared stable, the 'z' prefix and the
 * version number in the protocol and interface names are removed and the
 * interface version number is reset.
 *
 * @section page_ifaces_input_timestamps_unstable_v1 Interfaces
 * - @subpage page_iface_zwp_input_timestamps_manager_v1 - context object for high-resolution input timestamps
 * - @subpage page_iface_zwp_input_timestamps_v1 - context object for input timestamps
 * @section page_copyright_input_timestamps_unstable_v1 Copyright
 * <pre>
 *
 * Copyright © 2017 Collabora, Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 * </pre>
 */
struct wl_keyboard;
struct wl_pointer;
struct wl_touch;
struct zwp_input_timestamps_manager_v1;
struct zwp_input_timestamps_v1;

/**
 * @page page_iface_zwp_input_timestamps_manager_v1 zwp_input_timestamps_manager_v1
 * @section page_iface_zwp_input_timestamps_manager_v1_desc Description
 *
 * A global interface used for requesting high-resolution timestamps
 * for input events.
 * @section page_iface_zwp_input_timestamps_manager_v1_api API
 * See @ref iface_zwp_input_timestamps_manager_v1.
 */
/**
 * @defgroup iface_zwp_input_timestamps_manager_v1 The zwp_input_timestamps_manager_v1 interface
 *
 * A global interface used for requesting high-resolution timestamps
 * for input events.
 */
extern const struct wl_interface zwp_input_timestamps_manager_v1_interface;
/**
 * @page page_iface_zwp_input_timestamps_v1 zwp_input_timestamps_v1
 * @section page_iface_zwp_input_timestamps_v1_desc Description
 *
 * Provides high-resolution timestamp events for a set of subscribed input
 * events. The set of subscribed input events is determined by the
 * zwp_input_timestamps_manager_v1 request used to create this object.
 * @section page_iface_zwp_input_timestamps_v1_api API
 * See @ref iface_zwp_input_timestamps_v1.
 */
/**
 * @defgroup iface_zwp_input_timestamps_v1 The zwp_input_timestamps_v1 interface
 *
 * Provides high-resolution timestamp events for a set of subscribed input
 * events. The set of subscribed input events is determined by the
 * zwp_input_timestamps_manager_v1 request used to create this object.
 */
extern const struct wl_interface zwp_input_timestamps_v1_interface;

#define ZWP_INPUT_TIMESTAMPS_MANAGER_V1_DESTROY 0
#define ZWP_INPUT_TIMESTAMPS_MANAGER_V1_GET_KEYBOARD_TIMESTAMPS 1
#define ZWP_INPUT_TIMESTAMPS_MANAGER_V1_GET_POINTER_TIMESTAMPS 2
#define ZWP_INPUT_TIMESTAMPS_MANAGER_V1_GET_TOUCH_TIMESTAMPS 3


/**
 * @ingroup iface_zwp_input_timestamps_manager_v1
 */
#define ZWP_INPUT_TIMESTAMPS_MANAGER_V1_DESTROY_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_timestamps_manager_v1
 */
#define ZWP_INPUT_TIMESTAMPS_MANAGER_V1_GET_KEYBOARD_TIMESTAMPS_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_timestamps_manager_v1
 */
#define ZWP_INPUT_TIMESTAMPS_MANAGER_V1_GET_POINTER_TIMESTAMPS_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_timestamps_manager_v1
 */
#define ZWP_INPUT_TIMESTAMPS_MANAGER_V1_GET_TOUCH_TIMESTAMPS_SINCE_VERSION 1

/** @ingroup iface_zwp_input_timestamps_manager_v1 */
static inline void
zwp_input_timestamps_manager_v1_set_user_data(struct zwp_input_timestamps_manager_v1 *zwp_input_timestamps_manager_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_input_timestamps_manager_v1, user_data);
}

/** @ingroup iface_zwp_input_timestamps_manager_v1 */
static inline void *
zwp_input_timestamps_manager_v1_get_user_data(struct zwp_input_timestamps_manager_v1 *zwp_input_timestamps_manager_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_input_timestamps_manager_v1);
}

static inline uint32_t
zwp_input_timestamps_manager_v1_get_version(struct zwp_input_timestamps_manager_v1 *zwp_input_timestamps_manager_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_input_timestamps_manager_v1);
}

/**
 * @ingroup iface_zwp_input_timestamps_manager_v1
 *
 * Informs the server that the client will no longer be using this
 * protocol object. Existing objects created by this object are not
 * affected.
 */
static inline void
zwp_input_timestamps_manager_v1_destroy(struct zwp_input_timestamps_manager_v1 *zwp_input_timestamps_manager_v1)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_input_timestamps_manager_v1,
			 ZWP_INPUT_TIMESTAMPS_MANAGER_V1_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) zwp_input_timestamps_manager_v1);
}

/**
 * @ingroup iface_zwp_input_timestamps_manager_v1
 *
 * Creates a new input timestamps object that represents a subscription
 * to high-resolution timestamp events for all wl_keyboard events that
 * carry a timestamp.
 *
 * If the associated wl_keyboard object is invalidated, either through
 * client action (e.g. release) or server-side changes, the input
 * timestamps object becomes inert and the client should destroy it
 * by calling zwp_input_timestamps_v1.destroy.
 */
static inline struct zwp_input_timestamps_v1 *
zwp_input_timestamps_manager_v1_get_keyboard_timestamps(struct zwp_input_timestamps_manager_v1 *zwp_input_timestamps_manager_v1, struct wl_keyboard *keyboard)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_constructor((struct wl_proxy *) zwp_input_timestamps_manager_v1,
			 ZWP_INPUT_TIMESTAMPS_MANAGER_V1_GET_KEYBOARD_TIMESTAMPS, &zwp_input_timestamps_v1_interface, NULL, keyboard);

	return (struct zwp_input_timestamps_v1 *) id;
}

/**
 * @ingroup iface_zwp_input_timestamps_manager_v1
 *
 * Creates a new input timestamps object that represents a subscription
 * to high-resolution timestamp events for all wl_pointer events that
 * carry a timestamp.
 *
 * If the associated wl_pointer object is invalidated, either through
 * client action (e.g. release) or server-side changes, the input
 * timestamps object becomes inert and the client should destroy it
 * by calling zwp_input_timestamps_v1.destroy.
 */
static inline struct zwp_input_timestamps_v1 *
zwp_input_timestamps_manager_v1_get_pointer_timestamps(struct zwp_input_timestamps_manager_v1 *zwp_input_timestamps_manager_v1, struct wl_pointer *pointer)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_constructor((struct wl_proxy *) zwp_input_timestamps_manager_v1,
			 ZWP_INPUT_TIMESTAMPS_MANAGER_V1_GET_POINTER_TIMESTAMPS, &zwp_input_timestamps_v1_interface, NULL, pointer);

	return (struct zwp_input_timestamps_v1 *) id;
}

/**
 * @ingroup iface_zwp_input_timestamps_manager_v1
 *
 * Creates a new input timestamps object that represents a subscription
 * to high-resolution timestamp events for all wl_touch events that
 * carry a timestamp.
 *
 * If the associated wl_touch object becomes invalid, either through
 * client action (e.g. release) or server-side changes, the input
 * timestamps object becomes inert and the client should destroy it
 * by calling zwp_input_timestamps_v1.destroy.
 */
static inline struct zwp_input_timestamps_v1 *
zwp_input_timestamps_manager_v1_get_touch_timestamps(struct zwp_input_timestamps_manager_v1 *zwp_input_timestamps_manager_v1, struct wl_touch *touch)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_constructor((struct wl_proxy *) zwp_input_timestamps_manager_v1,
			 ZWP_INPUT_TIMESTAMPS_MANAGER_V1_GET_TOUCH_TIMESTAMPS, &zwp_input_timestamps_v1_interface, NULL, touch);

	return (struct zwp_input_timestamps_v1 *) id;
}

/**
 * @ingroup iface_zwp_input_timestamps_v1
 * @struct zwp_input_timestamps_v1_listener
 */
struct zwp_input_timestamps_v1_listener {
	/**
	 * high-resolution timestamp event
	 *
	 * The timestamp event is associated with the first subsequent
	 * input event carrying a timestamp which belongs to the set of
	 * input events this object is subscribed to.
	 *
	 * The timestamp provided by this event is a high-resolution
	 * version of the timestamp argument of the associated input event.
	 * The provided timestamp is in the same clock domain and is at
	 * least as accurate as the associated input event timestamp.
	 *
	 * The timestamp is expressed as tv_sec_hi, tv_sec_lo, tv_nsec
	 * triples, each component being an unsigned 32-bit value. Whole
	 * seconds are in tv_sec which is a 64-bit value combined from
	 * tv_sec_hi and tv_sec_lo, and the additional fractional part in
	 * tv_nsec as nanoseconds. Hence, for valid timestamps tv_nsec must
	 * be in [0, 999999999].
	 * @param tv_sec_hi high 32 bits of the seconds part of the timestamp
	 * @param tv_sec_lo low 32 bits of the seconds part of the timestamp
	 * @param tv_nsec nanoseconds part of the timestamp
	 */
	void (*timestamp)(void *data,
			  struct zwp_input_timestamps_v1 *zwp_input_timestamps_v1,
			  uint32_t tv_sec_hi,
			  uint32_t tv_sec_lo,
			  uint32_t tv_nsec);
};

/**
 * @ingroup iface_zwp_input_timestamps_v1
 */
static inline int
zwp_input_timestamps_v1_add_listener(struct zwp_input_timestamps_v1 *zwp_input_timestamps_v1,
				     const struct zwp_input_timestamps_v1_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) zwp_input_timestamps_v1,
				     (void (**)(void)) listener, data);
}

#define ZWP_INPUT_TIMESTAMPS_V1_DESTROY 0

/**
 * @ingroup iface_zwp_input_timestamps_v1
 */
#define ZWP_INPUT_TIMESTAMPS_V1_TIMESTAMP_SINCE_VERSION 1

/**
 * @ingroup iface_zwp_input_timestamps_v1
 */
#define ZWP_INPUT_TIMESTAMPS_V1_DESTROY_SINCE_VERSION 1

/** @ingroup iface_zwp_input_timestamps_v1 */
static inline void
zwp_input_timestamps_v1_set_user_data(struct zwp_input_timestamps_v1 *zwp_input_timestamps_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_input_timestamps_v1, user_data);
}

/** @ingroup iface_zwp_input_timestamps_v1 */
static inline void *
zwp_input_timestamps_v1_get_user_data(struct zwp_input_timestamps_v1 *zwp_input_timestamps_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_input_timestamps_v1);
}

static inline uint32_t
zwp_input_timestamps_v1_get_version(struct zwp_input_timestamps_v1 *zwp_input_timestamps_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_input_timestamps_v1);
}

/**
 * @ingroup iface_zwp_input_timestamps_v1
 *
 * Informs the server that the client will no longer be using this
 * protocol object. After the server processes the request, no more
 * timestamp events will be emitted.
 */
static inline void
zwp_input_timestamps_v1_destroy(struct zwp_input_timestamps_v1 *zwp_input_timestamps_v1)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_input_timestamps_v1,
			 ZWP_INPUT_TIMESTAMPS_V1_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) zwp_input_timestamps_v1);
}

#ifdef  __cplusplus
}
#endif

#endif