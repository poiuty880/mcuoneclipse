/**
 * \file
 * \brief Platform configuration
 * \author (c) 2014 Erich Styger, http://mcuoneclipse.com/
 * \note MIT License (http://opensource.org/licenses/mit-license.html)
 *
 * This header file is used to configure the application (enable/disable functionality).
 */

#ifndef PLATFORM_H_
#define PLATFORM_H_

#define PL_HAS_SD_CARD  0
  /*!< 1 if we have SD card support, 0 otherwise */
#define PL_HAS_GPS      0
  /*!< 1 if we have GPS, 0 otherwise */
#define PL_HAS_SHELL    0
  /*!< 1 if we have shell, 0 otherwise */

#endif /* PLATFORM_H_ */
