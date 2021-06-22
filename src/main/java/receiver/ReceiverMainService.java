package receiver;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

import com.fasterxml.jackson.core.JsonParseException;
import com.fasterxml.jackson.databind.JsonMappingException;
import com.fasterxml.jackson.databind.ObjectMapper;

import receiver.model.ResponseModel;

public class ReceiverMainService {
	public static void main(String[] args) {

		BufferedReader inputData = new BufferedReader(new InputStreamReader(System.in));
		String arg = "";
		List<ResponseModel> argsList = new ArrayList<ResponseModel>();

		try {
			while ((arg = inputData.readLine()) != null) {
				String[] response = arg.split(",");
				String tempature = response[0];
				String soc = response[1];
				ResponseModel responseData = new ResponseModel();
				responseData.setTemperature(Float.parseFloat(tempature.split(":")[1]));
				responseData.setSOC(Float.parseFloat(soc.split(":")[1].replace("$", "")));
				argsList.add(responseData);
			}

		} catch (IOException e) {
			e.printStackTrace();
		}

		ReceiverService.minMaxAvgTemp(argsList);
		ReceiverService.minMaxAvgSOC(argsList);

	}
}
