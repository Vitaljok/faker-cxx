#pragma once

#include <string>
#include <vector>

namespace faker
{
const std::vector<std::string> russianLastNamesMales = {
    "Авдеев",     "Агапов",      "Агафонов",   "Агеев",       "Акимов",     "Аксёнов",      "Александров",
    "Алексеев",   "Алёхин",      "Алешин",     "Алёшин",      "Ананьев",    "Андреев",      "Андрианов",
    "Аникин",     "Анисимов",    "Анохин",     "Антипов",     "Антонов",    "Артамонов",    "Артёмов",
    "Архипов",    "Астафьев",    "Астахов",    "Афанасьев",   "Бабушкин",   "Баженов",      "Балашов",
    "Баранов",    "Барсуков",    "Басов",      "Безруков",    "Беликов",    "Белкин",       "Белов",
    "Белоусов",   "Беляев",      "Беляков",    "Березин",     "Берия",      "Беспалов",     "Бессонов",
    "Бирюков",    "Блинов",      "Блохин",     "Бобров",      "Богданов",   "Богомолов",    "Болдырев",
    "Большаков",  "Бондарев",    "Борисов",    "Бородин",     "Бочаров",    "Булатов",      "Булгаков",
    "Буров",      "Быков",       "Бычков",     "Вавилов",     "Вагин",      "Васильев",     "Вдовин",
    "Верещагин",  "Вешняков",    "Виноградов", "Винокуров",   "Вишневский", "Владимиров",   "Власов",
    "Волков",     "Волошин",     "Воробьёв",   "Воронин",     "Воронков",   "Воронов",      "Воронцов",
    "Второв",     "Высоцкий",    "Гаврилов",   "Гайдуков",    "Гакабов",    "Галкин",       "Герасимов",
    "Гладков",    "Глебов",      "Глухов",     "Глушков",     "Гноев",      "Голиков",      "Голованов",
    "Головин",    "Голубев",     "Гончаров",   "Горбань",     "Горбачав",   "Горбачёв",     "Горбунов",
    "Гордеев",    "Горелов",     "Горлов",     "Горохов",     "Горшков",    "Горюнов",      "Горячев",
    "Грачёв",     "Греков",      "Грибков",    "Грибов",      "Григорьев",  "Гришин",       "Громов",
    "Губанов",    "Гуляев",      "Гуров",      "Гусев",       "Гущин",      "Давыдов",      "Данилов",
    "Дашков",     "Дегтярев",    "Дегтярёв",   "Дементьев",   "Демидов",    "Дёмин",        "Демьянов",
    "Денисов",    "Дмитриев",    "Добрынин",   "Долгов",      "Дорофеев",   "Дорохов",      "Дроздов",
    "Дружинин",   "Дубинин",     "Дубов",      "Дубровин",    "Дьяков",     "Дьяконов",     "Евдокимов",
    "Евсеев",     "Егоров",      "Ежов",       "Елизаров",    "Елисеев",    "Ельцин",       "Емельянов",
    "Еремеев",    "Ерёмин",      "Ермаков",    "Ермилов",     "Ермолаев",   "Ермолов",      "Еромлаев",
    "Ерофеев",    "Ерохин",      "Ершов",      "Ефимов",      "Ефремов",    "Жаров",        "Жданов",
    "Жилин",      "Жириновский", "Жуков",      "Журавлёв",    "Завьялов",   "Заец",         "Зайцев",
    "Захаров",    "Зверев",      "Звягинцев",  "Зеленин",     "Зимин",      "Зиновьев",     "Злобин",
    "Золотарев",  "Золотарёв",   "Золотов",    "Зорин",       "Зотов",      "Зубков",       "Зубов",
    "Зуев",       "Зыков",       "Зюганов",    "Иванов",      "Ивашов",     "Игнатов",      "Игнатьев",
    "Измайлов",   "Ильин",       "Ильинский",  "Ильюхин",     "Исаев",      "Исаков",       "Казаков",
    "Казанцев",   "Калачев",     "Калачёв",    "Калашников",  "Калинин",    "Калмыков",     "Калугин",
    "Капустин",   "Карасев",     "Карасёв",    "Карпов",      "Карташов",   "Касаткин",     "Касьянов",
    "Киреев",     "Кириллов",    "Киселёв",    "Кислов",      "Климов",     "Клюев",        "Князев",
    "Ковалёв",    "Коваленко",   "Коваль",     "Кожевников",  "Козин",      "Козлов",       "Козловский",
    "Козырев",    "Колесников",  "Колесов",    "Колосов",     "Колпаков",   "Кольцов",      "Комаров",
    "Комиссаров", "Кондратов",   "Кондратьев", "Кондрашов",   "Коновалов",  "Кононов",      "Константинов",
    "Копылов",    "Корнев",      "Корнеев",    "Корнилов",    "Коровин",    "Королёв",      "Корольков",
    "Коротков",   "Корчагин",    "Коршунов",   "Косарев",     "Костин",     "Котов",        "Кочергин",
    "Кочетков",   "Кочетов",     "Кошелев",    "Кравцов",     "Краснов",    "Красоткин",    "Кролик",
    "Кроликов",   "Круглов",     "Крылов",     "Крюков",      "Крючков",    "Кудрявцев",    "Кудряшов",
    "Кузин",      "Кузнецов",    "Кузьмин",    "Кукушкин",    "Кулагин",    "Кулаков",      "Кулешов",
    "Куликов",    "Куприянов",   "Курочкин",   "Лаврентьев",  "Лавров",     "Лазарев",      "Лапин",
    "Лаптев",     "Лапшин",      "Ларин",      "Ларионов",    "Латышев",    "Лебедев",      "Левин",
    "Леонов",     "Леонтьев",    "Литвинов",   "Лобанов",     "Логинов",    "Лопатин",      "Лосев",
    "Лужков",     "Лукин",       "Лукьянов",   "Лыков",       "Львов",      "Любимов",      "Майоров",
    "Макаров",    "Макеев",      "Максимов",   "Малахов",     "Малинин",    "Малофеев",     "Малышев",
    "Мальцев",    "Маркелов",    "Маркин",     "Марков",      "Мартынов",   "Масленников",  "Маслов",
    "Матвеев",    "Матвиенко",   "Медведев",   "Медейко",     "Мельников",  "Меньшов",      "Меркулов",
    "Мешков",     "Мещеряков",   "Минаев",     "Минин",       "Миронов",    "Митрофанов",   "Михайлов",
    "Михеев",     "Мишустин",    "Моисеев",    "Молчанов",    "Моргунов",   "Морозов",      "Москвин",
    "Муравьёв",   "Муратов",     "Муромцев",   "Мухин",       "Мясников",   "Навальный",    "Назаров",
    "Наумов",     "Некрасов",    "Нестеров",   "Нефёдов",     "Нечаев",     "Никитин",      "Никифоров",
    "Николаев",   "Никольский",  "Никонов",    "Никулин",     "Новиков",    "Новодворский", "Носков",
    "Носов",      "Овсянников",  "Овчинников", "Одинцов",     "Озеров",     "Окулов",       "Олейников",
    "Орехов",     "Орлов",       "Осипов",     "Островский",  "Павлов",     "Павловский",   "Панин",
    "Панков",     "Панкратов",   "Панов",      "Пантелеев",   "Панфилов",   "Парамонов",    "Парфёнов",
    "Пастухов",   "Пахомов",     "Пекарев",    "Петров",      "Петровский", "Петухов",      "Пименов",
    "Пирогов",    "Платонов",    "Плотников",  "Поздняков",   "Покровский", "Поликарпов",   "Поляков",
    "Пономарев",  "Пономарёв",   "Попов",      "Порошин",     "Порывай",    "Постников",    "Потапов",
    "Похлёбкин",  "Прокофьев",   "Прохоров",   "Прошин",      "Пугачёв",    "Путин",        "Раков",
    "Резицкий",   "Рогов",       "Родин",      "Родионов",    "Рожков",     "Розанов",      "Романов",
    "Рублёв",     "Рубцов",      "Рудаков",    "Руднев",      "Румянцев",   "Русаков",      "Русанов",
    "Рыбаков",    "Рыбкин",      "Рыжиков",    "Рыжков",      "Рыжов",      "Рябинин",      "Рябов",
    "Савельев",   "Савин",       "Савицкий",   "Сазонов",     "Сальников",  "Самойлов",     "Самсонов",
    "Сафонов",    "Сахаров",     "Светличный", "Светлов",     "Свешников",  "Свиридов",     "Севастьянов",
    "Седов",      "Селезнёв",    "Селиванов",  "Семёнов",     "Сёмин",      "Сергеев",      "Серебряков",
    "Серов",      "Сидоров",     "Сизов",      "Симонов",     "Синицин",    "Синицын",      "Ситников",
    "Скворцов",   "Смирнов",     "Снегирёв",   "Соболев",     "Собянин",    "Соколов",      "Соловьёв",
    "Сомов",      "Сорокин",     "Сотников",   "Софронов",    "Спиридонов", "Стариков",     "Старостин",
    "Степанов",   "Столяров",    "Стрелков",   "Стрельников", "Строев",     "Субботин",     "Суворов",
    "Судаков",    "Сурганов",    "Сурков",     "Суслов",      "Суханов",    "Сухарев",      "Сухов",
    "Сычёв",      "Тарасов",     "Терентьев",  "Терехов",     "Тимофеев",   "Титов",        "Тихомиров",
    "Тихонов",    "Ткачёв",      "Токарев",    "Толкачёв",    "Торшин",     "Третьяков",    "Трифонов",
    "Троицкий",   "Трофим",      "Трофимов",   "Троцкий",     "Трошин",     "Туманов",      "Уваров",
    "Ульянов",    "Усов",        "Успенский",  "Устинов",     "Уткин",      "Ушаков",       "Фадеев",
    "Фёдоров",    "Федосеев",    "Федосов",    "Федотов",     "Фетисов",    "Филатов",      "Филимонов",
    "Филиппов",   "Фирсов",      "Фокин",      "Фомин",       "Фомичев",    "Фомичёв",      "Фролов",
    "Харитонов",  "Хомяков",     "Хохлов",     "Хромов",      "Хрущёв",     "Худяков",      "Царёв",
    "Цветков",    "Чеботарёв",   "Черепанов",  "Черкасов",    "Чернов",     "Черной",       "Чёрный",
    "Черных",     "Чернышев",    "Чернышёв",   "Черняев",     "Чесноков",   "Чижов",        "Чистяков",
    "Чумаков",    "Шаповалов",   "Шапошников", "Шаров",       "Швецов",     "Шевелёв",      "Шевцов",
    "Шестаков",   "Шилов",       "Широков",    "Ширяев",      "Шишкин",     "Шмелёв",       "Шубин",
    "Шувалов",    "Шульгин",     "Щеглов",     "Щербаков",    "Щукин",      "Юдин",         "Яковлев",
    "Яшин"};
}
