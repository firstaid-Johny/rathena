-- Run once for an existing guild_donate_log table created before name snapshots.
ALTER TABLE `guild_donate_log`
  ADD COLUMN `char_name` VARCHAR(24) NOT NULL DEFAULT '' AFTER `char_id`,
  ADD COLUMN `guild_name` VARCHAR(24) NOT NULL DEFAULT '' AFTER `char_name`;
