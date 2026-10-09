-- Apply to the same database configured by map_server_db.
-- Both tables must use InnoDB: donation transactions use row locking.
CREATE TABLE IF NOT EXISTS `guild_donate` (
  `guild_id` INT UNSIGNED NOT NULL,
  `total_zeny` BIGINT NOT NULL DEFAULT 0,
  `level` SMALLINT UNSIGNED NOT NULL DEFAULT 0,
  `updated_at` DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`guild_id`)
) ENGINE=InnoDB;

CREATE TABLE IF NOT EXISTS `guild_donate_log` (
  `id` BIGINT UNSIGNED NOT NULL AUTO_INCREMENT,
  `guild_id` INT UNSIGNED NOT NULL,
  `account_id` INT UNSIGNED NOT NULL,
  `char_id` INT UNSIGNED NOT NULL,
  `char_name` VARCHAR(24) NOT NULL DEFAULT '',
  `guild_name` VARCHAR(24) NOT NULL DEFAULT '',
  `amount` BIGINT NOT NULL,
  `total_after` BIGINT NOT NULL,
  `level_after` SMALLINT UNSIGNED NOT NULL,
  `created_at` DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`),
  KEY `guild_time` (`guild_id`,`created_at`),
  KEY `char_time` (`char_id`,`created_at`)
) ENGINE=InnoDB;
