// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by lcm-gen

#ifndef _wescore_lcm_msgs_RawGyro_h
#define _wescore_lcm_msgs_RawGyro_h

#include <stdint.h>
#include <stdlib.h>
#include <lcm/lcm_coretypes.h>
#include <lcm/lcm.h>

#ifdef __cplusplus
extern "C" {
#endif

/// IMU data
typedef struct _wescore_lcm_msgs_RawGyro wescore_lcm_msgs_RawGyro;
struct _wescore_lcm_msgs_RawGyro
{
    int64_t    mtime;
    float      gyro[3];
};

/**
 * Create a deep copy of a wescore_lcm_msgs_RawGyro.
 * When no longer needed, destroy it with wescore_lcm_msgs_RawGyro_destroy()
 */
wescore_lcm_msgs_RawGyro* wescore_lcm_msgs_RawGyro_copy(const wescore_lcm_msgs_RawGyro* to_copy);

/**
 * Destroy an instance of wescore_lcm_msgs_RawGyro created by wescore_lcm_msgs_RawGyro_copy()
 */
void wescore_lcm_msgs_RawGyro_destroy(wescore_lcm_msgs_RawGyro* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _wescore_lcm_msgs_RawGyro_subscription_t wescore_lcm_msgs_RawGyro_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * wescore_lcm_msgs_RawGyro is received.
 */
typedef void(*wescore_lcm_msgs_RawGyro_handler_t)(
    const lcm_recv_buf_t *rbuf, const char *channel,
    const wescore_lcm_msgs_RawGyro *msg, void *userdata);

/**
 * Publish a message of type wescore_lcm_msgs_RawGyro using LCM.
 *
 * @param lcm The LCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means LCM has transferred
 * responsibility of the message data to the OS.
 */
int wescore_lcm_msgs_RawGyro_publish(lcm_t *lcm, const char *channel, const wescore_lcm_msgs_RawGyro *msg);

/**
 * Subscribe to messages of type wescore_lcm_msgs_RawGyro using LCM.
 *
 * @param lcm The LCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by LCM when a message is
 *     received. This function is invoked by LCM during calls to lcm_handle()
 *     and lcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return 0 on success, <0 if an error occured
 */
wescore_lcm_msgs_RawGyro_subscription_t* wescore_lcm_msgs_RawGyro_subscribe(
    lcm_t *lcm, const char *channel, wescore_lcm_msgs_RawGyro_handler_t handler, void *userdata);

/**
 * Removes and destroys a subscription created by wescore_lcm_msgs_RawGyro_subscribe()
 */
int wescore_lcm_msgs_RawGyro_unsubscribe(lcm_t *lcm, wescore_lcm_msgs_RawGyro_subscription_t* hid);

/**
 * Sets the queue capacity for a subscription.
 * Some LCM providers (e.g., the default multicast provider) are implemented
 * using a background receive thread that constantly revceives messages from
 * the network.  As these messages are received, they are buffered on
 * per-subscription queues until dispatched by lcm_handle().  This function
 * how many messages are queued before dropping messages.
 *
 * @param subs the subscription to modify.
 * @param num_messages The maximum number of messages to queue
 *  on the subscription.
 * @return 0 on success, <0 if an error occured
 */
int wescore_lcm_msgs_RawGyro_subscription_set_queue_capacity(
    wescore_lcm_msgs_RawGyro_subscription_t* subs, int num_messages);

/**
 * Encode a message of type wescore_lcm_msgs_RawGyro into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to wescore_lcm_msgs_RawGyro_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int wescore_lcm_msgs_RawGyro_encode(void *buf, int offset, int maxlen, const wescore_lcm_msgs_RawGyro *p);

/**
 * Decode a message of type wescore_lcm_msgs_RawGyro from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with wescore_lcm_msgs_RawGyro_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int wescore_lcm_msgs_RawGyro_decode(const void *buf, int offset, int maxlen, wescore_lcm_msgs_RawGyro *msg);

/**
 * Release resources allocated by wescore_lcm_msgs_RawGyro_decode()
 * @return 0
 */
int wescore_lcm_msgs_RawGyro_decode_cleanup(wescore_lcm_msgs_RawGyro *p);

/**
 * Check how many bytes are required to encode a message of type wescore_lcm_msgs_RawGyro
 */
int wescore_lcm_msgs_RawGyro_encoded_size(const wescore_lcm_msgs_RawGyro *p);

// LCM support functions. Users should not call these
int64_t __wescore_lcm_msgs_RawGyro_get_hash(void);
uint64_t __wescore_lcm_msgs_RawGyro_hash_recursive(const __lcm_hash_ptr *p);
int __wescore_lcm_msgs_RawGyro_encode_array(
    void *buf, int offset, int maxlen, const wescore_lcm_msgs_RawGyro *p, int elements);
int __wescore_lcm_msgs_RawGyro_decode_array(
    const void *buf, int offset, int maxlen, wescore_lcm_msgs_RawGyro *p, int elements);
int __wescore_lcm_msgs_RawGyro_decode_array_cleanup(wescore_lcm_msgs_RawGyro *p, int elements);
int __wescore_lcm_msgs_RawGyro_encoded_array_size(const wescore_lcm_msgs_RawGyro *p, int elements);
int __wescore_lcm_msgs_RawGyro_clone_array(const wescore_lcm_msgs_RawGyro *p, wescore_lcm_msgs_RawGyro *q, int elements);

#ifdef __cplusplus
}
#endif

#endif