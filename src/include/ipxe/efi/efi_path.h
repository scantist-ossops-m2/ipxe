#ifndef _IPXE_EFI_PATH_H
#define _IPXE_EFI_PATH_H

/** @file
 *
 * EFI device paths
 *
 */

FILE_LICENCE ( GPL2_OR_LATER_OR_UBDL );

#include <ipxe/interface.h>
#include <ipxe/efi/efi.h>
#include <ipxe/efi/Protocol/DevicePath.h>

extern EFI_DEVICE_PATH_PROTOCOL *
efi_path_end ( EFI_DEVICE_PATH_PROTOCOL *path );
extern size_t efi_path_len ( EFI_DEVICE_PATH_PROTOCOL *path );

extern EFI_DEVICE_PATH_PROTOCOL * efi_describe ( struct interface *interface );
#define efi_describe_TYPE( object_type ) \
	typeof ( EFI_DEVICE_PATH_PROTOCOL * ( object_type ) )

#endif /* _IPXE_EFI_PATH_H */
