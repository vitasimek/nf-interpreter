//
// Copyright (c) 2019 The nanoFramework project contributors
// See LICENSE file in the project root for full license information.
//

////////////////////////////////////
// buffers configuration
#define SPIFFS_LOGICAL_PAGE_SIZE        (256)

#define SPIFFS_WORK_BUFFER_SIZE         (SPIFFS_LOGICAL_PAGE_SIZE * 2)
#define SPIFFS_FILE_DESCRIPTORS_SPACE   (32 * 2)
#define SPIFFS_CACHE_SIZE               ((SPIFFS_LOGICAL_PAGE_SIZE + 32) * 4)

#define SPIFFS_DRIVER_QSPI              (1)

// @brief  W25Q32 Configuration   
#define W25Q32_FLASH_SIZE                  0x400000  /* 32 MBits => 4MBytes */
#define W25Q32_SECTOR_SIZE                 0x10000   /* 64 sectors of 64KBytes */
#define W25Q32_SUBSECTOR_SIZE              0x1000    /* 1024 subsectors of 4kBytes */
#define W25Q32_PAGE_SIZE                   0x100     /* 16384 pages of 256 bytes */

#define W25Q32_DUMMY_CYCLES_READ           8
#define W25Q32_DUMMY_CYCLES_READ_QUAD      8

#define W25Q32_BULK_ERASE_MAX_TIME         250000
#define W25Q32_SECTOR_ERASE_MAX_TIME       3000
#define W25Q32_SUBSECTOR_ERASE_MAX_TIME    800

// W25Q32 Commands   
/* Reset Operations */
#define RESET_ENABLE_CMD                     0x66
#define RESET_MEMORY_CMD                     0x99

/* Identification Operations */
#define READ_ID_CMD                          0x90
#define READ_ID_CMD2                         0x9F
#define MULTIPLE_IO_READ_ID_CMD              0xAF
#define READ_SERIAL_FLASH_DISCO_PARAM_CMD    0x5A

/* Read Operations */
#define READ_CMD                             0x03
#define FAST_READ_CMD                        0x0B
#define DUAL_OUT_FAST_READ_CMD               0x3B
#define DUAL_INOUT_FAST_READ_CMD             0xBB
#define QUAD_OUT_FAST_READ_CMD               0x6B
#define QUAD_INOUT_FAST_READ_CMD             0xEB

/* Write Operations */
#define WRITE_ENABLE_CMD                     0x06
#define WRITE_DISABLE_CMD                    0x04

/* Register Operations */
#define READ_STATUS_REG1_CMD                 0x05
#define WRITE_STATUS_REG1_CMD                0x01

#define READ_STATUS_REG2_CMD                 0x35
#define WRITE_STATUS_REG2_CMD                0x31

#define READ_LOCK_REG_CMD                    0xE8
#define WRITE_LOCK_REG_CMD                   0xE5

#define READ_FLAG_STATUS_REG_CMD             0x70
#define CLEAR_FLAG_STATUS_REG_CMD            0x50

#define READ_NONVOL_CFG_REG_CMD              0xB5
#define WRITE_NONVOL_CFG_REG_CMD             0xB1

#define READ_ENHANCED_VOL_CFG_REG_CMD        0x65
#define WRITE_ENHANCED_VOL_CFG_REG_CMD       0x61

/* Program Operations */
#define PAGE_PROG_CMD                        0x02
#define DUAL_IN_FAST_PROG_CMD                0xA2
#define EXT_DUAL_IN_FAST_PROG_CMD            0xD2
#define QUAD_IN_FAST_PROG_CMD                0x32
#define EXT_QUAD_IN_FAST_PROG_CMD            0x12

/* Erase Operations */
#define SUBSECTOR_ERASE_CMD                  0x20
#define SECTOR_ERASE_CMD                     0xD8
#define BULK_ERASE_CMD                       0xC7

#define PROG_ERASE_RESUME_CMD                0x7A
#define PROG_ERASE_SUSPEND_CMD               0x75

/* One-Time Programmable Operations */
#define READ_OTP_ARRAY_CMD                   0x4B
#define PROG_OTP_ARRAY_CMD                   0x42

//  W25Q32 Registers   
/* Status Register 1 */
#define W25Q32_SR_WIP                      ((uint8_t)0x01)    /*!< Write in progress */
#define W25Q32_SR_WREN                     ((uint8_t)0x02)    /*!< Write enable latch */
#define W25Q32_SR_BLOCKPR                  ((uint8_t)0x5C)    /*!< Block protected against program and erase operations */
#define W25Q32_SR_PRBOTTOM                 ((uint8_t)0x20)    /*!< Protected memory area defined by BLOCKPR starts from top or bottom */
#define W25Q32_SR_SRWREN                   ((uint8_t)0x80)    /*!< Status register write enable/disable */

/* Status Register 2 */
#define W25Q32_SR2_QE                      ((uint8_t)0x02)    /*!< Quad Enable */


/* Nonvolatile Configuration Register */
#define W25Q32_NVCR_LOCK                   ((uint16_t)0x0001) /*!< Lock nonvolatile configuration register */
#define W25Q32_NVCR_DUAL                   ((uint16_t)0x0004) /*!< Dual I/O protocol */
#define W25Q32_NVCR_QUAB                   ((uint16_t)0x0008) /*!< Quad I/O protocol */
#define W25Q32_NVCR_RH                     ((uint16_t)0x0010) /*!< Reset/hold */
#define W25Q32_NVCR_ODS                    ((uint16_t)0x01C0) /*!< Output driver strength */
#define W25Q32_NVCR_XIP                    ((uint16_t)0x0E00) /*!< XIP mode at power-on reset */
#define W25Q32_NVCR_NB_DUMMY               ((uint16_t)0xF000) /*!< Number of dummy clock cycles */

/* Volatile Configuration Register */
#define W25Q32_VCR_WRAP                    ((uint8_t)0x03)    /*!< Wrap */
#define W25Q32_VCR_XIP                     ((uint8_t)0x08)    /*!< XIP */
#define W25Q32_VCR_NB_DUMMY                ((uint8_t)0xF0)    /*!< Number of dummy clock cycles */

/* Enhanced Volatile Configuration Register */
#define W25Q32_EVCR_ODS                    ((uint8_t)0x07)    /*!< Output driver strength */
#define W25Q32_EVCR_VPPA                   ((uint8_t)0x08)    /*!< Vpp accelerator */
#define W25Q32_EVCR_RH                     ((uint8_t)0x10)    /*!< Reset/hold */
#define W25Q32_EVCR_DUAL                   ((uint8_t)0x40)    /*!< Dual I/O protocol */
#define W25Q32_EVCR_QUAD                   ((uint8_t)0x80)    /*!< Quad I/O protocol */

/* Flag Status Register */
#define W25Q32_FSR_PRERR                   ((uint8_t)0x02)    /*!< Protection error */
#define W25Q32_FSR_PGSUS                   ((uint8_t)0x04)    /*!< Program operation suspended */
#define W25Q32_FSR_VPPERR                  ((uint8_t)0x08)    /*!< Invalid voltage during program or erase */
#define W25Q32_FSR_PGERR                   ((uint8_t)0x10)    /*!< Program error */
#define W25Q32_FSR_ERERR                   ((uint8_t)0x20)    /*!< Erase error */
#define W25Q32_FSR_ERSUS                   ((uint8_t)0x40)    /*!< Erase operation suspended */
#define W25Q32_FSR_READY                   ((uint8_t)0x80)    /*!< Ready or command in progress */

#define W25Q32_MANUFACTURER_ID             ((uint8_t)0xEF)
#define W25Q32_DEVICE_ID1                  ((uint8_t)0x40)
#define W25Q32_DEVICE_ID2                  ((uint8_t)0x16)

////////////////////////////////
// remapping into SPIFFS defines

#define SPIFFS_TOTAL_SIZE               W25Q32_FLASH_SIZE
#define SPIFFS_ERASE_BLOCK_SIZE         W25Q32_SECTOR_SIZE
#define SPIFFS_LOGICAL_BLOCK_SIZE       (64*1024)
