/* Linker script to configure memory regions. */

SEARCH_DIR(.)
GROUP(-lgcc -lc -lnosys)

MEMORY
{
  FLASH (rx) : ORIGIN = 0x00016000, LENGTH = 0xA000 
  RAM (rwx) :  ORIGIN = 0x20002000, LENGTH = 0x2000 
}


INCLUDE "gcc_nrf51_common.ld"
