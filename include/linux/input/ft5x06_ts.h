/*
 * Copyright (c) 2013 Ash Charles <ash@gumstix.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 */
#ifndef FT5X06_TS_H
#define FT5X06_TS_H

#define SCREEN_MAX_X    470
#define SCREEN_MAX_Y    275
#define PRESS_MAX       255

#define FT5X0X_NAME	"ft5x06_ts"
#define FT5X0X_REG_POWER_MODE	0xa5
#define FT5X0X_REG_FIRMID	0xa6


struct ft5x06_platform_data {
	int irq_gpio;
	int reset_gpio;
	int wake_gpio;
	unsigned int xmin;
	unsigned int xmax;
	unsigned int xfuzz;
	unsigned int ymin;
	unsigned int ymax;
	unsigned int yfuzz;
	unsigned int multitouch;
};

#endif /* FT5X06_TS_H */
