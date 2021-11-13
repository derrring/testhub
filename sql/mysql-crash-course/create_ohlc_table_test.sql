CREATE TABLE ohlcv(
    `Code` VARCHAR(10) NOT NULL,
    `Time` VARCHAR(25) NOT NULL,
    `Open` FLOAT,
    `High` FLOAT, 
    `Low` FLOAT, 
    `Close` FLOAT, 
    `Vol` BIGINT,
    `Tnvr` BIGINT,
    `Avg` FLOAT,
)ENGINE = InnoDB;

LOAD DATA LOCAL INFILE "C:/Users/zvezd/Downloads/OHLC/2020-04-07-OHLCV.csv"
INTO TABLE ohlcv
FIELDS TERMINATED BY ','
LINES TERMINATED BY "\n"
IGNORE 1 LINES


;