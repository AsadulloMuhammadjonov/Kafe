-- phpMyAdmin SQL Dump
-- version 4.0.10.10
-- http://www.phpmyadmin.net
--
-- Хост: 127.0.0.1:3306
-- Время создания: Дек 21 2021 г., 12:55
-- Версия сервера: 5.5.45
-- Версия PHP: 5.3.29

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- База данных: `Kafee`
--

-- --------------------------------------------------------

--
-- Структура таблицы `Karkul`
--

CREATE TABLE IF NOT EXISTS `Karkul` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `t_id` int(50) NOT NULL,
  `Nomi` varchar(50) NOT NULL,
  `Narxi` int(50) NOT NULL,
  `Miqdor` varchar(50) NOT NULL,
  `Summa` int(50) NOT NULL,
  `Birligi` varchar(40) NOT NULL,
  `Turi` varchar(50) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=8 ;

--
-- Дамп данных таблицы `Karkul`
--

INSERT INTO `Karkul` (`id`, `t_id`, `Nomi`, `Narxi`, `Miqdor`, `Summa`, `Birligi`, `Turi`) VALUES
(3, 0, 'Sabzi', 2000, '10', 20000, 'kg', 'Osh'),
(4, 0, 'Kartoshka', 5000, '10', 50000, 'kg', 'Osh'),
(5, 0, 'Piyoz', 2500, '1', 2500, 'kg', 'Shorva'),
(6, 0, 'Kartoshka', 5000, '1', 5000, 'kg', 'Shahshlik'),
(7, 0, 'Piyoz', 2500, '2', 5000, 'kg', 'Shahshlik');

-- --------------------------------------------------------

--
-- Структура таблицы `KassaChiqim`
--

CREATE TABLE IF NOT EXISTS `KassaChiqim` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `Izoh` varchar(50) NOT NULL,
  `Summa` int(50) NOT NULL,
  `Vaqt` datetime NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- Структура таблицы `KassaKirim`
--

CREATE TABLE IF NOT EXISTS `KassaKirim` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `Fish` varchar(50) NOT NULL,
  `Xizmat_Xaqqi` varchar(50) NOT NULL,
  `Chegirma` varchar(40) NOT NULL,
  `Jami` varchar(50) NOT NULL,
  `Naqt` varchar(50) NOT NULL,
  `Plastik` varchar(50) NOT NULL,
  `Vaqt` datetime NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=16 ;

--
-- Дамп данных таблицы `KassaKirim`
--

INSERT INTO `KassaKirim` (`id`, `Fish`, `Xizmat_Xaqqi`, `Chegirma`, `Jami`, `Naqt`, `Plastik`, `Vaqt`) VALUES
(1, 'Asliddin', '800', '', '8800', '0', '8800', '2021-12-20 21:51:31'),
(2, 'Asliddin', '1000', '', '11000', '11000', '0', '2021-12-20 22:01:00'),
(3, 'Asliddin', '1000', '', '11000', '0', '11000', '2021-12-20 22:01:24'),
(4, 'Asliddin', '800', '', '8800', '0', '8800', '2021-12-20 22:03:35'),
(5, 'Asliddin', '800', '', '8800', '8800', '0', '2021-12-20 22:03:52'),
(6, 'Asliddin', '1500', '', '16500', '16500', '0', '2021-12-20 22:06:12'),
(7, 'Asliddin', '1500', '', '16500', '16500', '0', '2021-12-20 22:06:25'),
(8, 'Asliddin', '1500', '', '16500', '16500', '0', '2021-12-20 22:07:48'),
(9, 'Asliddin', '1500', '', '16500', '16500', '0', '2021-12-20 22:08:05'),
(10, 'Asliddin', '800', '', '8800', '0', '8800', '2021-12-21 10:08:54'),
(11, 'Asadullo', '4500', '', '49500', '0', '49500', '2021-12-21 11:44:39'),
(12, 'Asadullo', '4500', '', '49500', '0', '49500', '2021-12-21 11:44:39'),
(13, 'Asadullo', '4500', '', '49500', '0', '49500', '2021-12-21 11:44:39'),
(14, 'Asadullo', '2000', '', '22000', '0', '22000', '2021-12-21 11:44:59'),
(15, 'Asadullo', '1100', '', '12100', '0', '12100', '2021-12-21 11:45:08');

-- --------------------------------------------------------

--
-- Структура таблицы `Kategoriya`
--

CREATE TABLE IF NOT EXISTS `Kategoriya` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `Nomi` varchar(50) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=9 ;

--
-- Дамп данных таблицы `Kategoriya`
--

INSERT INTO `Kategoriya` (`id`, `Nomi`) VALUES
(3, '1-ovqat'),
(4, '2-ovqat'),
(5, 'Suyuq'),
(6, 'Qoyiq'),
(7, 'Suyuqlik'),
(8, 'Kaboblar');

-- --------------------------------------------------------

--
-- Структура таблицы `Kirim`
--

CREATE TABLE IF NOT EXISTS `Kirim` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `Nomi` varchar(50) NOT NULL,
  `Miqdor` int(50) NOT NULL,
  `Narxi` int(40) NOT NULL,
  `Birligi` varchar(50) NOT NULL,
  `Vaqt` datetime NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=8 ;

--
-- Дамп данных таблицы `Kirim`
--

INSERT INTO `Kirim` (`id`, `Nomi`, `Miqdor`, `Narxi`, `Birligi`, `Vaqt`) VALUES
(1, 'Sabzi', 2000, 10, 'kg', '2021-12-20 16:34:06'),
(2, 'Sabzi', 2000, 10, 'kg', '2021-12-20 16:36:44'),
(3, 'Sabzi', 2000, 10, 'kg', '2021-12-20 17:50:34'),
(4, 'Piyoz', 2500, 10, 'kg', '2021-12-20 17:50:55'),
(5, 'Kartoshka', 10, 5000, 'kg', '2021-12-20 17:56:57'),
(6, 'Piyoz', 2, 2500, 'kg', '2021-12-20 22:42:20'),
(7, 'Piyoz', 2, 2500, 'kg', '2021-12-20 22:43:38');

-- --------------------------------------------------------

--
-- Структура таблицы `Kutish`
--

CREATE TABLE IF NOT EXISTS `Kutish` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `Tov_id` int(50) NOT NULL,
  `Tov_nomi` varchar(50) NOT NULL,
  `Narxi` int(40) NOT NULL,
  `Miqdor` int(50) NOT NULL,
  `Summa` int(50) NOT NULL,
  `Turi` varchar(50) NOT NULL,
  `Kate` varchar(50) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=22 ;

--
-- Дамп данных таблицы `Kutish`
--

INSERT INTO `Kutish` (`id`, `Tov_id`, `Tov_nomi`, `Narxi`, `Miqdor`, `Summa`, `Turi`, `Kate`) VALUES
(18, 3, 'Osh', 20000, 3, 60000, '1-Stol', '1-ovqat'),
(19, 4, 'Shorva', 10000, 4, 40000, '1-Stol', '2-ovqat'),
(20, 7, 'Fanta 1,5L', 11000, 2, 22000, '1-Stol', 'Suyuqlik'),
(21, 6, 'Shahshlik', 8000, 3, 24000, '1-Stol', 'Kaboblar');

-- --------------------------------------------------------

--
-- Структура таблицы `Menyu`
--

CREATE TABLE IF NOT EXISTS `Menyu` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `Nomi` varchar(50) NOT NULL,
  `Miqdor` varchar(50) NOT NULL,
  `Narxi` int(50) NOT NULL,
  `Summa` int(50) NOT NULL,
  `Birligi` varchar(50) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=6 ;

--
-- Дамп данных таблицы `Menyu`
--

INSERT INTO `Menyu` (`id`, `Nomi`, `Miqdor`, `Narxi`, `Summa`, `Birligi`) VALUES
(3, 'Sabzi', '-516', 2000, 0, 'kg'),
(4, 'Piyoz', '2', 2500, 0, 'kg'),
(5, 'Kartoshka', '-93', 5000, 0, 'kg');

-- --------------------------------------------------------

--
-- Структура таблицы `Oshpaz`
--

CREATE TABLE IF NOT EXISTS `Oshpaz` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `t_id` int(50) NOT NULL,
  `Nomi` varchar(50) NOT NULL,
  `Miqdor` int(50) NOT NULL,
  `Stol` varchar(50) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=12 ;

-- --------------------------------------------------------

--
-- Структура таблицы `Sotilganlar`
--

CREATE TABLE IF NOT EXISTS `Sotilganlar` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `Tov_id` int(50) NOT NULL,
  `Tov_nomi` varchar(50) NOT NULL,
  `SotishNarx` int(40) NOT NULL,
  `Miqdor` int(50) NOT NULL,
  `Summa` int(50) NOT NULL,
  `x_id` int(40) NOT NULL,
  `x_fish` varchar(50) NOT NULL,
  `Foiz` int(50) NOT NULL,
  `Stol` varchar(50) NOT NULL,
  `JamiSumma` int(50) NOT NULL,
  `Vaqt` datetime NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=16 ;

--
-- Дамп данных таблицы `Sotilganlar`
--

INSERT INTO `Sotilganlar` (`id`, `Tov_id`, `Tov_nomi`, `SotishNarx`, `Miqdor`, `Summa`, `x_id`, `x_fish`, `Foiz`, `Stol`, `JamiSumma`, `Vaqt`) VALUES
(1, 6, 'Shahshlik', 8000, 1, 8000, 0, 'Asliddin', 800, '9-Stol', 84000, '2021-12-20 21:51:31'),
(2, 4, 'Shorva', 10000, 1, 10000, 0, 'Asliddin', 1000, '2-Stol', 84000, '2021-12-20 22:01:00'),
(3, 4, 'Shorva', 10000, 1, 10000, 0, 'Asliddin', 1000, '3-Stol', 84000, '2021-12-20 22:01:24'),
(4, 6, 'Shahshlik', 8000, 1, 8000, 0, 'Asliddin', 800, '8-Stol', 84000, '2021-12-20 22:03:35'),
(5, 6, 'Shahshlik', 8000, 1, 8000, 0, 'Asliddin', 800, '8-Stol', 84000, '2021-12-20 22:03:52'),
(6, 5, 'Pepsi', 15000, 1, 15000, 0, 'Asliddin', 1500, '2-Stol', 84000, '2021-12-20 22:06:12'),
(7, 5, 'Pepsi', 15000, 1, 15000, 0, 'Asliddin', 1500, '2-Stol', 84000, '2021-12-20 22:06:25'),
(8, 5, 'Pepsi', 15000, 1, 15000, 0, 'Asliddin', 1500, '3-Stol', 84000, '2021-12-20 22:07:48'),
(9, 5, 'Pepsi', 15000, 1, 15000, 0, 'Asliddin', 1500, '3-Stol', 84000, '2021-12-20 22:08:05'),
(10, 6, 'Shahshlik', 8000, 1, 8000, 0, 'Asliddin', 800, '2-Stol', 84000, '2021-12-21 10:08:54'),
(11, 3, 'Osh', 20000, 1, 20000, 0, 'Asadullo', 4500, '1-Stol', 84000, '2021-12-21 11:44:39'),
(12, 4, 'Shorva', 10000, 1, 10000, 0, 'Asadullo', 4500, '1-Stol', 84000, '2021-12-21 11:44:39'),
(13, 5, 'Pepsi', 15000, 1, 15000, 0, 'Asadullo', 4500, '1-Stol', 84000, '2021-12-21 11:44:39'),
(14, 3, 'Osh', 20000, 1, 20000, 0, 'Asadullo', 2000, 'Ozi Bilan', 84000, '2021-12-21 11:44:59'),
(15, 8, 'Cola 1,5L', 11000, 1, 11000, 0, 'Asadullo', 1100, '9-Stol', 84000, '2021-12-21 11:45:08');

-- --------------------------------------------------------

--
-- Структура таблицы `Statik_T`
--

CREATE TABLE IF NOT EXISTS `Statik_T` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `t_id` int(50) NOT NULL,
  `Nomi` varchar(50) NOT NULL,
  `Narxi` int(50) NOT NULL,
  `Miqdor` int(40) NOT NULL,
  `Summa` int(50) NOT NULL,
  `Kategoriya` varchar(50) NOT NULL,
  `JamiSumma` int(50) NOT NULL,
  `Vaqt` datetime NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=12 ;

--
-- Дамп данных таблицы `Statik_T`
--

INSERT INTO `Statik_T` (`id`, `t_id`, `Nomi`, `Narxi`, `Miqdor`, `Summa`, `Kategoriya`, `JamiSumma`, `Vaqt`) VALUES
(2, 4, 'Shorva', 10000, 1, 10000, '2-ovqat', 84000, '2021-12-20 22:01:00'),
(3, 4, 'Shorva', 10000, 1, 10000, '2-ovqat', 84000, '2021-12-20 22:01:24'),
(4, 6, 'Shahshlik', 8000, 1, 8000, 'Qoyiq', 84000, '2021-12-20 22:03:35'),
(5, 6, 'Shahshlik', 8000, 1, 8000, 'Qoyiq', 84000, '2021-12-20 22:03:52'),
(6, 5, 'Pepsi', 15000, 4, 60000, 'Suyuqlik', 84000, '2021-12-20 22:06:12'),
(7, 6, 'Shahshlik', 8000, 1, 8000, 'Kaboblar', 84000, '2021-12-21 10:08:54'),
(8, 3, 'Osh', 20000, 2, 40000, '1-ovqat', 84000, '2021-12-21 11:44:39'),
(9, 4, 'Shorva', 10000, 1, 10000, '2-ovqat', 84000, '2021-12-21 11:44:39'),
(10, 5, 'Pepsi', 15000, 1, 15000, 'Suyuqlik', 84000, '2021-12-21 11:44:39'),
(11, 8, 'Cola 1,5L', 11000, 1, 11000, 'Suyuqlik', 84000, '2021-12-21 11:45:08');

-- --------------------------------------------------------

--
-- Структура таблицы `Stollar`
--

CREATE TABLE IF NOT EXISTS `Stollar` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `Nomi` varchar(50) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=15 ;

--
-- Дамп данных таблицы `Stollar`
--

INSERT INTO `Stollar` (`id`, `Nomi`) VALUES
(1, '1-Stol'),
(2, '2-Stol'),
(3, '3-Stol'),
(5, '4-Stol'),
(6, '5-Stol'),
(7, '6-Stol'),
(8, '7-Stol'),
(9, '8-Stol'),
(10, '9-Stol'),
(11, '10-Stol'),
(12, '11-Stol'),
(13, '12-Stol'),
(14, 'Ozi Bilan');

-- --------------------------------------------------------

--
-- Структура таблицы `Tovarlar`
--

CREATE TABLE IF NOT EXISTS `Tovarlar` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `Nomi` varchar(50) NOT NULL,
  `Narxi` int(50) NOT NULL,
  `Kategoriya` varchar(50) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=9 ;

--
-- Дамп данных таблицы `Tovarlar`
--

INSERT INTO `Tovarlar` (`id`, `Nomi`, `Narxi`, `Kategoriya`) VALUES
(3, 'Osh', 20000, '1-ovqat'),
(4, 'Shorva', 10000, '2-ovqat'),
(5, 'Pepsi', 15000, 'Suyuqlik'),
(6, 'Shahshlik', 8000, 'Kaboblar'),
(7, 'Fanta 1,5L', 11000, 'Suyuqlik'),
(8, 'Cola 1,5L', 11000, 'Suyuqlik');

-- --------------------------------------------------------

--
-- Структура таблицы `Vaqtinchasavdo`
--

CREATE TABLE IF NOT EXISTS `Vaqtinchasavdo` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `Tov_id` int(50) NOT NULL,
  `Tov_nomi` varchar(50) NOT NULL,
  `Narxi` int(40) NOT NULL,
  `Miqdor` int(50) NOT NULL,
  `Summa` int(50) NOT NULL,
  `Kategoriya` varchar(50) NOT NULL,
  `JamiSumma` int(50) NOT NULL,
  `Umsumma` int(50) NOT NULL,
  `Q_X_Narxi` int(50) NOT NULL,
  `Band` varchar(50) NOT NULL,
  `Tolandi` int(50) NOT NULL,
  `Fish` varchar(50) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=29 ;

-- --------------------------------------------------------

--
-- Структура таблицы `Xaqqi`
--

CREATE TABLE IF NOT EXISTS `Xaqqi` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `x_id` int(50) NOT NULL,
  `Fish` varchar(50) NOT NULL,
  `Ish_Xaqqi` int(50) NOT NULL,
  `Xaqqi` int(40) NOT NULL,
  `Foiz` int(50) NOT NULL,
  `JamiSumma` int(50) NOT NULL,
  `Vaqt` datetime NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=4 ;

--
-- Дамп данных таблицы `Xaqqi`
--

INSERT INTO `Xaqqi` (`id`, `x_id`, `Fish`, `Ish_Xaqqi`, `Xaqqi`, `Foiz`, `JamiSumma`, `Vaqt`) VALUES
(1, 3, 'Asliddin', 3000, 2400, 600, 8240, '2021-12-20 22:07:48'),
(2, 3, 'Asliddin', 800, 640, 160, 8240, '2021-12-21 10:08:55'),
(3, 4, 'Asadullo', 7600, 7600, 0, 8240, '2021-12-21 11:44:39');

-- --------------------------------------------------------

--
-- Структура таблицы `Xodimlar`
--

CREATE TABLE IF NOT EXISTS `Xodimlar` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `Fish` varchar(50) NOT NULL,
  `Parol` int(50) NOT NULL,
  `Huquq` varchar(50) NOT NULL,
  `Tel` varchar(50) NOT NULL,
  `Ish_Xaqqi` varchar(50) NOT NULL,
  `Xaqqi` int(50) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=6 ;

--
-- Дамп данных таблицы `Xodimlar`
--

INSERT INTO `Xodimlar` (`id`, `Fish`, `Parol`, `Huquq`, `Tel`, `Ish_Xaqqi`, `Xaqqi`) VALUES
(3, 'Asliddin', 222, 'Admin', '+998 91 121-31-61', '10', 8),
(4, 'Asadullo', 111, 'Admin', '+998 91 003-02-15', '10', 10),
(5, 'Abdumuxtor', 333, 'Kassir', '+998 25 252-52-52', '8', 7);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
