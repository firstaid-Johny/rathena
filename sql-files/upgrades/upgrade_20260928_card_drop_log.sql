CREATE TABLE IF NOT EXISTS `card_drop_log` (
  `id` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `time` datetime NOT NULL,
  `char_id` int(11) unsigned NOT NULL DEFAULT '0',
  `char_name` varchar(24) NOT NULL DEFAULT '',
  `monster_id` int(11) unsigned NOT NULL,
  `item_id` int(10) unsigned NOT NULL,
  `item_name` varchar(100) NOT NULL DEFAULT '',
  `map` varchar(32) NOT NULL DEFAULT '',
  `rate` int(10) unsigned NOT NULL,
  `denominator` int(10) unsigned NOT NULL,
  `chance_percent` decimal(7,4) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `char_id` (`char_id`),
  KEY `item_id` (`item_id`),
  KEY `time` (`time`)
) ENGINE=InnoDB;
