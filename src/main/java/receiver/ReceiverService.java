package receiver;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import javax.xml.crypto.Data;

import receiver.constant.BMSConstants;
import receiver.model.BatteryCharacteristic;
import receiver.model.ResponseModel;

public class ReceiverService {
	private static ReportingService reporter = new ReportingService();

	public static boolean minMaxAvgTemp(List<ResponseModel> responseData) {

		List<Float> temperatureList = getTemperaturesList(responseData);

		if (!DataValidator.isValidList(temperatureList))
			return false;
		BatteryCharacteristic batteryCharacteristic = new BatteryCharacteristic(
				DataValidator.getMinValueFromParamList(temperatureList),
				DataValidator.getMaxValueFromParamList(temperatureList),
				DataValidator.getAverageFromParamList(temperatureList));

		reporter.printProcessedData(BMSConstants.TEMPERATURE, batteryCharacteristic);

		return true;
	}

	public static List<Float> getTemperaturesList(List<ResponseModel> responseData) {
		List<Float> tempertures = new ArrayList<Float>();
		if (responseData != null) {
			for(ResponseModel data : responseData)
			{
				tempertures.add(data.getTemperature());
			}
		}
		return tempertures;
	}

	public static boolean minMaxAvgSOC(List<ResponseModel> response) {
		List<Float> socList = getSocList(response);

		if (!DataValidator.isValidList(socList))
			return false;

		BatteryCharacteristic batteryCharacteristic = new BatteryCharacteristic(
				DataValidator.getMinValueFromParamList(socList), DataValidator.getMaxValueFromParamList(socList),
				DataValidator.getAverageFromParamList(socList));

		reporter.printProcessedData(BMSConstants.SOC, batteryCharacteristic);

		return true;
	}

	public static List<Float> getSocList(List<ResponseModel> responseData) {
		List<Float> socList = new ArrayList<Float>();
		if (responseData != null) {
			for(ResponseModel data : responseData)
			{
				socList.add(data.getSOC());
			}
	}
		return socList;
	}
}
